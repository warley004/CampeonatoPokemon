# Compilador e flags
CXX = g++
CXXFLAGS = -std=c++11 -Iinclude

# Diretórios
SRCDIR = src
OBJDIR = obj
BINDIR = bin

# Arquivos fonte e objeto
SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

# Nome do executável
EXEC = $(BINDIR)/mainPokemon

# Alvo principal
all: $(OBJDIR) $(BINDIR) $(EXEC)

# Regras de construção
$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Cria o diretório de objetos se não existir
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Cria o diretório de binário se não existir
$(BINDIR):
	mkdir -p $(BINDIR)

# Compilação dos arquivos objeto
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza
clean:
	rm -f $(OBJDIR)/*.o $(EXEC)
	rm -rf $(OBJDIR) $(BINDIR)
