# Compilador e flags
CXX = g++
CXXFLAGS = -std=c++11 -Iinclude

# Diretórios
SRCDIR = src
OBJDIR = obj

# Arquivos fonte e objeto
SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

# Alvo principal
all: $(OBJDIR) mainPokemon

# Regras de construção
mainPokemon: $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Cria o diretório de objetos se não existir
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Compilação dos arquivos objeto
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza
clean:
	rm -f $(OBJDIR)/*.o mainPokemon
	rm -rf $(OBJDIR)
