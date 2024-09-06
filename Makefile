all: main
	./main
	
main: main.cpp
	g++ -o main main.cpp

clean:
	rm -f main

run: main
	./main

.PHONY: clean run
