CC=g++
CCFLAGS=-g -Wall -Wextra --std=c++17 

.PHONY : all

TARGET=rps_unit_tests

TESTED_CLASSES = ../Rock.cpp ../Paper.cpp ../Scissors.cpp ../ActionFactory.cpp
CPPFILES=$(wildcard *.cpp) $(TESTED_CLASSES)
OBJFILES=$(patsubst %.cpp,%.o,$(CPPFILES))

all: $(TARGET)

%: %.cpp
	$(CC) $(CCFLAGS) -c -o $@ $<

$(TARGET): $(OBJFILES)
	$(CC) -o $(TARGET) $(OBJFILES)

clean:
	rm -f $(OBJFILES)
