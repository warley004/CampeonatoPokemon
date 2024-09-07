#include "Pokemon.hpp"
#include <iostream>

Pokemon::Pokemon(const std::string& nome, const std::string& tipo_ataque, double forca_ataque)
    : _nome(nome), _tipo_ataque(tipo_ataque), _forca_ataque(forca_ataque), _energia(100) {}

void Pokemon::falar_nome() const {
    std::cout << _nome << "!" << std::endl;
}

void Pokemon::imprimir_status() const {
    std::cout << _nome << "!" << std::endl;
    std::cout << "Energia: " << _energia << std::endl;
}

void Pokemon::imprimir_informacoes() const {
    std::cout << "Pokemon: " << _nome << std::endl;
    std::cout << "Tipo ataque: " << _tipo_ataque << std::endl;
    std::cout << "Dano: " << calcular_dano() << std::endl;
    std::cout << "Energia: " << _energia << std::endl;
}

void Pokemon::atacar(Pokemon* outro_pokemon) {
    falar_nome();
    falar_tipo_ataque();
    double dano = calcular_dano();
    std::cout << "Dano: " << dano << std::endl;
    outro_pokemon->receber_dano(dano);
}

void Pokemon::receber_dano(double valor_dano) {
    _energia -= valor_dano;
    if (_energia <= 0) {
        std::cout << _nome << " morreu!" << std::endl;
        _energia = 0;
    }
}

std::string Pokemon::get_nome() const {
    return _nome;
}
