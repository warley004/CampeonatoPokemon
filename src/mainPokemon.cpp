#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Campeonato.hpp"
#include "avaliacao_basica_pokemon.hpp"

int main()
{
    Campeonato campeonato;
    std::vector<std::string> comandos;
    std::string linha;

    while (std::getline(std::cin, linha))
    {
        comandos.push_back(linha);
    }

    for (const auto& comando : comandos)
    {
        std::istringstream iss(comando);
        std::string acao;
        iss >> acao;

        if (acao == "t")
        {
            std::string nome;
            iss >> nome;
            campeonato.cadastrar_treinador(nome);
        }
        else if (acao == "i")
        {
            int idt;
            iss >> idt;
            campeonato.imprimir_informacoes_treinador(idt);
        }
        else if (acao == "e")
        {
            int idt;
            std::string nome, tipo_ataque;
            double forca_ataque, potencia_raio;
            iss >> idt >> nome >> tipo_ataque >> forca_ataque >> potencia_raio;
            campeonato.cadastrar_pokemon_eletrico(idt, nome, tipo_ataque, forca_ataque, potencia_raio);
        }
        else if (acao == "q")
        {
            int idt;
            std::string nome, tipo_ataque;
            double forca_ataque, litros_jato;
            iss >> idt >> nome >> tipo_ataque >> forca_ataque >> litros_jato;
            campeonato.cadastrar_pokemon_aquatico(idt, nome, tipo_ataque, forca_ataque, litros_jato);
        }
        else if (acao == "x")
        {
            int idt;
            std::string nome, tipo_ataque;
            double forca_ataque, temperatura_explosao;
            iss >> idt >> nome >> tipo_ataque >> forca_ataque >> temperatura_explosao;
            campeonato.cadastrar_pokemon_explosivo(idt, nome, tipo_ataque, forca_ataque, temperatura_explosao);
        }
        else if (acao == "h")
        {
            int idt1, idpk1, idt2, idpk2;
            iss >> idt1 >> idpk1 >> idt2 >> idpk2;
            campeonato.executar_batalha(idt1, idpk1, idt2, idpk2);
        }
        else if (acao == "b")
        {
            avaliacao_basica(); 
        }
    }

    return 0;
}
