#ifndef CAMPEONATO_HPP
#define CAMPEONATO_HPP

#include <vector>
#include "Treinador.hpp" 

class Campeonato {
public:
    void cadastrar_treinador(const std::string& nome);
    void cadastrar_pokemon_eletrico(int idt, const std::string& nome, const std::string& tipo_ataque, double forca_ataque, double potencia_raio);
    void cadastrar_pokemon_aquatico(int idt, const std::string& nome, const std::string& tipo_ataque, double forca_ataque, double litros_jato);
    void cadastrar_pokemon_explosivo(int idt, const std::string& nome, const std::string& tipo_ataque, double forca_ataque, double temperatura_explosao);
    void imprimir_informacoes_treinador(int idt) const;
    void executar_batalha(int idt1, int idpk1, int idt2, int idpk2) const;

private:
    std::vector<Treinador*> _treinadores;
};

#endif 
