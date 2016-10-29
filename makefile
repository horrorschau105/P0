all:
	g++ -std=c++11 -Wall -Werror main.cpp -o main -pthread
.PHONY: run
run: 
	./main
