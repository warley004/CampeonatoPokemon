#include "PokemonEletrico.hpp"
#include <iostream>

PokemonEletrico::PokemonEletrico(std::string nome, std::string tipo_ataque, double forca_ataque, double potencia_raio)
    : Pokemon(nome, tipo_ataque, forca_ataque), _potencia_raio(potencia_raio) {}

void PokemonEletrico::falar_tipo_ataque() const {
    std::cout << _tipo_ataque << "!" << std::endl;
    std::cout << "Bzzzz!" << std::endl;
}

double PokemonEletrico::calcular_dano() const {
    return ataque_eletrico();
}

double PokemonEletrico::ataque_eletrico() const {
    return _forca_ataque * _potencia_raio;
}
