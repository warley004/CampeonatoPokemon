#ifndef POKEMONEXPLOSIVO_HPP
#define POKEMONEXPLOSIVO_HPP

#include "Pokemon.hpp"

class PokemonExplosivo : public Pokemon {
public:
    PokemonExplosivo(std::string nome, std::string tipo_ataque, double forca_ataque, double temperatura_explosao);

    void falar_tipo_ataque() const override;
    double calcular_dano() const override;

private:
    double _temperatura_explosao;
    double ataque_explosivo() const;
};

#endif 
