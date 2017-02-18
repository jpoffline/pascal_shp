OBJECTS = main.o PASCAL.o PLAQUE_COLLECTION.o PLAQUE.o PYRAMID.o
INC = -Wall -I/usr/local/include
LIBS = -L/usr/local/lib -lm  -L/usr/local/boost

CC = g++

all: main

%.o:     %.cpp
	$(CC) -c $(INC) $< -o $@

main: $(OBJECTS)
	$(CC) $(OBJECTS) $(LIBS) -o $@

clean:
	-rm -f $(OBJECTS) main
