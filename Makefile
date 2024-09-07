CXX = g++
CXXFLAGS = -std=c++11

OBJDIR = obj

SRC = Pokemon.cpp PokemonEletrico.cpp PokemonAquatico.cpp PokemonExplosivo.cpp Treinador.cpp Campeonato.cpp mainPokemon.cpp
OBJ = $(SRC:%.cpp=$(OBJDIR)/%.o)

all: $(OBJDIR) mainPokemon

mainPokemon: $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJDIR)/*.o mainPokemon
	rm -rf $(OBJDIR)
