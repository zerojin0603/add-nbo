#Makefile
all: add-nbo

add-nbo: add-nbo.o
	g++ -o add-nbo add-nbo.o thousand.bin five-hundred.bin

add-nbo.o: add-nbo.cpp

clean:
	rm -f add-nbo
	rm -f add-nbo.o