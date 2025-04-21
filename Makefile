XX = g++
CXXFLAGS = -Wall -std=c++11
SRC_DIR = src
INC_DIR = inc

SRC = main.cpp $(SRC_DIR)/Cylinder.cpp
OBJ = main.o $(SRC_DIR)/Cylinder.o
OUTPUT = Lab07

all: $(OUTPUT)

$(OUTPUT): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(OUTPUT) $(OBJ)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c main.cpp -o main.o

$(SRC_DIR)/Cylinder.o: $(SRC_DIR)/Cylinder.cpp
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $(SRC_DIR)/Cylinder.cpp -o $(SRC_DIR)/Cylinder.o

clean:
	rm -f main.o $(SRC_DIR)/Cylinder.o $(OUTPUT)

.PHONY: all clean

