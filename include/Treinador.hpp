#ifndef TREINADOR_HPP
#define TREINADOR_HPP

#include <string>
#include <vector>
#include "Pokemon.hpp" 

class Treinador {
public:
    Treinador(const std::string& nome);

    Pokemon* usar_pokemon(int idpk);
    void imprimir_informacoes() const;
    std::string get_nome() const;

    void cadastrar_pokemon_eletrico(const std::string& nome, const std::string& tipo_ataque, double forca_ataque, double potencia_raio);
    void cadastrar_pokemon_aquatico(const std::string& nome, const std::string& tipo_ataque, double forca_ataque, double litros_jato);
    void cadastrar_pokemon_explosivo(const std::string& nome, const std::string& tipo_ataque, double forca_ataque, double temperatura_explosao);

private:
    std::string _nome;
    std::vector<Pokemon*> _pokemons;
};

#endif 
