build:
	docker build -t node .
run:
	docker run -d -it --name node -p 8000:8000 -v /node:/app python
exec:
	docker exec -it node /bin/bash
logs:
	docker logs node
ps:
	docker ps -a
img:
	docker images
rm:
	docker rm -f $$(docker ps -qa)
rmi:
	docker rmi $$(docker images -q)

