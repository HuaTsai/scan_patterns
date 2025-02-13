CXX = g++
CXXFLAGS = -std=c++20 -Wall -Iinclude

SRCDIR = src
TARGET = main
SOURCES = $(wildcard $(SRCDIR)/*.cc)
OBJECTS = $(patsubst $(SRCDIR)/%.cc, %.o, $(SOURCES))

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: $(SRCDIR)/%.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean

