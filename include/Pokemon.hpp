#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <string>

class Pokemon {
public:
    Pokemon(const std::string& nome, const std::string& tipo_ataque, double forca_ataque);
    virtual ~Pokemon() = default;  
    virtual void falar_nome() const;
    virtual void falar_tipo_ataque() const = 0; 
    void imprimir_status() const;
    void imprimir_informacoes() const;
    void atacar(Pokemon* outro_pokemon);
    virtual void receber_dano(double valor_dano); 
    std::string get_nome() const;
    virtual double calcular_dano() const = 0; 

protected:
    std::string _nome;
    std::string _tipo_ataque;
    double _forca_ataque;
    double _energia;
};

#endif 
