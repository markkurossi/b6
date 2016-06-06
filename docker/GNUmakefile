NAME=b6:latest

ID=$(shell docker ps | grep $(NAME) | awk '{print $$1}')

PORTS=-p 2222:22
VOLUMES=-v /dev/urandom:/dev/random -v $(CURDIR)/..:/work
LINKS=

build:
	docker build -t $(NAME) .

stop:
	docker stop $(ID)
	docker rm $(ID)

logs:
	docker logs -f $(ID)

run:
	docker run -d $(PORTS) $(VOLUMES) $(LINKS) $(NAME)

shell:
	docker run \
	--add-host "WIN-2K8-DC.WIN.DOMAIN.COM:192.168.56.200" \
	--privileged -t -i $(PORTS) $(VOLUMES) $(LINKS) $(NAME) /bin/bash
