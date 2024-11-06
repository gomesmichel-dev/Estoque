CXX = g++
CXXFLAGS = -std=c++11 -Wall
LDFLAGS = -lfltk

SRC = src/main.cpp src/layout.cxx
OBJ = $(SRC:.cpp=.o)

all: sistema_estoque_vendas

sistema_estoque_vendas: $(OBJ)
	$(CXX) $(OBJ) -o sistema_estoque_vendas $(LDFLAGS)

clean:
	rm -f $(OBJ) sistema_estoque_vendas
