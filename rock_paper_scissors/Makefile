CC=g++
CCFLAGS=-g -Wall -Wextra --std=c++17 

.PHONY : all

TARGET=rps

CPPFILES=$(wildcard *.cpp)
OBJFILES=$(patsubst %.cpp,%.o,$(CPPFILES))

all: $(TARGET)

%: %.cpp
	$(CC) $(CCFLAGS) -c -o $@ $<

$(TARGET): $(OBJFILES)
	$(CC) -o $(TARGET) $(OBJFILES)

clean:
	rm -f $(OBJFILES)
