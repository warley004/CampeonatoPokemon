#include "Campeonato.hpp"
#include "PokemonEletrico.hpp"
#include "PokemonAquatico.hpp"
#include "PokemonExplosivo.hpp"
#include <iostream>

void Campeonato::cadastrar_treinador(const std::string& nome) {
    _treinadores.push_back(new Treinador(nome));
}

void Campeonato::cadastrar_pokemon_eletrico(int idt, const std::string& nome, const std::string& tipo_ataque, double forca_ataque, double potencia_raio) {
    if (static_cast<size_t>(idt) < _treinadores.size()) {
        _treinadores[idt]->cadastrar_pokemon_eletrico(nome, tipo_ataque, forca_ataque, potencia_raio);
    }
}

void Campeonato::cadastrar_pokemon_aquatico(int idt, const std::string& nome, const std::string& tipo_ataque, double forca_ataque, double litros_jato) {
    if (static_cast<size_t>(idt) < _treinadores.size()) {
        _treinadores[idt]->cadastrar_pokemon_aquatico(nome, tipo_ataque, forca_ataque, litros_jato);
    }
}

void Campeonato::cadastrar_pokemon_explosivo(int idt, const std::string& nome, const std::string& tipo_ataque, double forca_ataque, double temperatura_explosao) {
    if (static_cast<size_t>(idt) < _treinadores.size()) {
        _treinadores[idt]->cadastrar_pokemon_explosivo(nome, tipo_ataque, forca_ataque, temperatura_explosao);
    }
}

void Campeonato::imprimir_informacoes_treinador(int idt) const {
    if (static_cast<size_t>(idt) < _treinadores.size()) {
        _treinadores[idt]->imprimir_informacoes();
    }
}

void Campeonato::executar_batalha(int idt1, int idpk1, int idt2, int idpk2) const {
    if (static_cast<size_t>(idt1) < _treinadores.size() && static_cast<size_t>(idt2) < _treinadores.size()) {
        Treinador* treinador1 = _treinadores[idt1];
        Treinador* treinador2 = _treinadores[idt2];
        Pokemon* pokemon1 = treinador1->usar_pokemon(idpk1);
        Pokemon* pokemon2 = treinador2->usar_pokemon(idpk2);

        std::cout << "### Batalha ###" << std::endl;
        std::cout << treinador1->get_nome() << " (" << pokemon1->get_nome() << ") vs. "
                  << treinador2->get_nome() << " (" << pokemon2->get_nome() << ")" << std::endl;

        pokemon1->atacar(pokemon2);

        std::cout << "#########" << std::endl;
        pokemon2->imprimir_status();
        std::cout << "#########" << std::endl;
    }
}
