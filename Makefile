CXX = g++
CXXFLAGS = -std=c++11

all: mainPokemon

mainPokemon: Pokemon.o PokemonEletrico.o PokemonAquatico.o PokemonExplosivo.o Treinador.o Campeonato.o mainPokemon.o
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o mainPokemon
