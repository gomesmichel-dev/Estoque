# Variáveis de compilação
CXX = g++
CXXFLAGS += $(shell fltk-config --cxxflags)
LIBS += $(shell fltk-config --ldflags) -lfltk
LDFLAGS = -lfltk -lsqlite3

# Diretórios
SRC_DIR = src
BIN_DIR = bin

# Arquivos de origem e objetos
SRC = $(wildcard $(SRC_DIR)/*.cpp) $(wildcard $(SRC_DIR)/*.cxx)
OBJ = $(SRC:$(SRC_DIR)/%=$(BIN_DIR)/%.o)

# Tarefa principal
all: create_dirs sistema_estoque_vendas

# Criação dos diretórios bin
create_dirs:
	mkdir -p $(BIN_DIR)

# Compilação final do executável
sistema_estoque_vendas: $(OBJ)
	$(CXX) $(OBJ) -o $@ $(LDFLAGS)

# Compilação de arquivos .cpp para .o
$(BIN_DIR)/%.cpp.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compilação de arquivos .cxx para .o
$(BIN_DIR)/%.cxx.o: $(SRC_DIR)/%.cxx
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza de arquivos gerados
clean:
	rm -rf $(BIN_DIR) sistema_estoque_vendas
