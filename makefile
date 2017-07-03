# my first makefile
CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=smartsleep.c SleepNode.cpp SmartSleep.cpp MyMessage.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=smartsleep

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
