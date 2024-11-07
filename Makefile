CXX = g++
CXXFLAGS = -std=c++11 -Wall
LDFLAGS = -lfltk

SRC_DIR = src
BIN_DIR = bin

SRC = $(wildcard $(SRC_DIR)/*.cpp) $(wildcard $(SRC_DIR)/*.cxx)
OBJ = $(SRC:$(SRC_DIR)/%=$(BIN_DIR)/%.o)

all: create_dirs sistema_estoque_vendas

create_dirs:
	mkdir -p $(BIN_DIR)

sistema_estoque_vendas: $(OBJ)
	$(CXX) $(OBJ) -o $@ $(LDFLAGS)

$(BIN_DIR)/%.cpp.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BIN_DIR)/%.cxx.o: $(SRC_DIR)/%.cxx
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BIN_DIR) sistema_estoque_vendas