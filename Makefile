# Variáveis de compilação
CXX = g++
CXXFLAGS += $(shell fltk-config --cxxflags)
LDFLAGS += $(shell fltk-config --ldflags) -lsqlite3

# Diretórios
SRC_DIR = src
BIN_DIR = bin

# Arquivos de origem e objetos
SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ = $(patsubst $(SRC_DIR)/%.cpp, $(BIN_DIR)/%.o, $(SRC))

# Tarefa principal
all: create_dirs sistema_estoque_vendas

# Criação do diretório bin se não existir
create_dirs:
	mkdir -p $(BIN_DIR)

# Compilação final do executável
sistema_estoque_vendas: $(OBJ)
	$(CXX) $(OBJ) -o $@ $(LDFLAGS)

# Compilação de arquivos .cpp para .o
$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza de arquivos gerados
clean:
	rm -rf $(BIN_DIR) sistema_estoque_vendas

# Regra para monitorar alterações nos arquivos .cpp
monitor:
	@echo "Monitorando alterações em arquivos .cpp..."
	@inotifywait -m -e modify,create,delete $(SRC_DIR)/*.cpp | while read; do make; done
