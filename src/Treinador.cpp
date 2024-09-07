#include "Treinador.hpp"
#include "PokemonEletrico.hpp"
#include "PokemonAquatico.hpp"
#include "PokemonExplosivo.hpp"
#include <iostream>

Treinador::Treinador(const std::string& nome) : _nome(nome) {}

std::string Treinador::get_nome() const {
    return _nome;
}

Pokemon* Treinador::usar_pokemon(int idpk) {
    if (idpk >= 0 && idpk < _pokemons.size()) {
        return _pokemons[idpk];
    }
    return nullptr;
}

void Treinador::imprimir_informacoes() const {
    std::cout << "Nome: " << _nome << std::endl;
    std::cout << "----------" << std::endl;

    if (_pokemons.empty()) {
        std::cout << "Nenhum Pokemon cadastrado!" << std::endl;
    } else {
        for (const auto& pokemon : _pokemons) {
            pokemon->imprimir_informacoes(); 
            std::cout << "----------" << std::endl;
        }
    }
}

void Treinador::cadastrar_pokemon_eletrico(const std::string& nome, const std::string& tipo_ataque, double forca_ataque, double potencia_raio) {
    _pokemons.push_back(new PokemonEletrico(nome, tipo_ataque, forca_ataque, potencia_raio));
}

void Treinador::cadastrar_pokemon_aquatico(const std::string& nome, const std::string& tipo_ataque, double forca_ataque, double litros_jato) {
    _pokemons.push_back(new PokemonAquatico(nome, tipo_ataque, forca_ataque, litros_jato));
}

void Treinador::cadastrar_pokemon_explosivo(const std::string& nome, const std::string& tipo_ataque, double forca_ataque, double temperatura_explosao) {
    _pokemons.push_back(new PokemonExplosivo(nome, tipo_ataque, forca_ataque, temperatura_explosao));
}
