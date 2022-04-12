file = $(target)
all: build run

run:
	./bin/$(file).out
build: src/$(file).cpp
	mkdir -p bin
	g++ -fopenmp -o bin/$(file).out --std=c++17 -Wall -Wshadow -O2 src/$(file).cpp
clean:
	rm bin/*.o bin/a.out

