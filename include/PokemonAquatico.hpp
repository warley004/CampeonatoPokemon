#ifndef POKEMONAQUATICO_HPP
#define POKEMONAQUATICO_HPP

#include "Pokemon.hpp"

class PokemonAquatico : public Pokemon {
public:
    PokemonAquatico(std::string nome, std::string tipo_ataque, double forca_ataque, double litros_jato);

    void falar_tipo_ataque() const override;
    double calcular_dano() const override;

private:
    double _litros_jato;
    double ataque_aquatico() const;
};

#endif 
