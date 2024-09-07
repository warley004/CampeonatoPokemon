#ifndef POKEMONELETRICO_HPP
#define POKEMONELETRICO_HPP

#include "Pokemon.hpp"

class PokemonEletrico : public Pokemon {
public:
    PokemonEletrico(std::string nome, std::string tipo_ataque, double forca_ataque, double potencia_raio);

    void falar_tipo_ataque() const override;
    double calcular_dano() const override;

private:
    double _potencia_raio;
    double ataque_eletrico() const;
};

#endif 
