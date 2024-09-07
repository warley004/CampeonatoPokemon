# Campeonato de Pokemons

Este projeto tem como objetivo simular um campeonato de batalhas entre Pokemons, utilizando conceitos de Orientação a Objetos e Herança em C++. O sistema permite o gerenciamento de treinadores e pokemons, a realização de batalhas entre pokemons e a visualização de informações detalhadas sobre cada pokemon e treinador.

## Funcionalidades

### Classes e Herança

- **Pokemon**
  - Atributos: 
    - `string _nome`
    - `string _tipo_ataque`
    - `double _forca_ataque`
    - `double _energia = 100`
  - Métodos:
    - `void falar_nome()`
    - `void falar_tipo_ataque()`
    - `void imprimir_status()`
    - `void imprimir_informacoes()`
    - `virtual double calcular_dano() = 0`
    - `void atacar(Pokemon* outro_pokemon)`
    - `void receber_dano(double valor_dano)`

- **PokemonEletrico** (herda de `Pokemon`)
  - Atributos:
    - `double _potencia_raio`
  - Métodos:
    - `void falar_tipo_ataque()`
    - `double calcular_dano()`
    - `double ataque_eletrico()`

- **PokemonAquatico** (herda de `Pokemon`)
  - Atributos:
    - `double _litros_jato`
  - Métodos:
    - `void falar_tipo_ataque()`
    - `double calcular_dano()`
    - `double ataque_aquatico()`

- **PokemonExplosivo** (herda de `Pokemon`)
  - Atributos:
    - `double _temperatura_explosao`
  - Métodos:
    - `void falar_tipo_ataque()`
    - `double calcular_dano()`
    - `double ataque_explosivo()`

### Treinador

- Atributos:
  - `string _nome`
  - `vector<Pokemon*> _pokemons`
- Métodos:
  - `void cadastrar_pokemon_eletrico(string nome, string tipo_ataque, double forca_ataque, double potencia_raio)`
  - `void cadastrar_pokemon_aquatico(string nome, string tipo_ataque, double forca_ataque, double litros_jato)`
  - `void cadastrar_pokemon_explosivo(string nome, string tipo_ataque, double forca_ataque, double temperatura_explosao)`
  - `Pokemon* usar_pokemon(int idpk)`
  - `void imprimir_informacoes()`

### Campeonato

- Atributos:
  - `vector<Treinador*> _treinadores`
- Métodos:
  - `void cadastrar_treinador(std::string nome)`
  - `void cadastrar_pokemon_eletrico(int idt, string nome, string tipo_ataque, double forca_ataque, double potencia_raio)`
  - `void cadastrar_pokemon_aquatico(int idt, string nome, string tipo_ataque, double forca_ataque, double litros_jato)`
  - `void cadastrar_pokemon_explosivo(int idt, string nome, string tipo_ataque, double forca_ataque, double temperatura_explosao)`
  - `void imprimir_informacoes_treinador(int idt)`
  - `void executar_batalha(int idt1, int idpk1, int idt2, int idpk2)`

## Comandos

O arquivo `mainPokemon.cpp` gerencia a entrada e saída do programa. Os seguintes comandos estão disponíveis:

- `t nome`: Cadastra um treinador no campeonato.
- `i idt`: Imprime as informações do treinador com o índice `idt`.
- `e idt nome tipo_ataque forca_ataque potencia_raio`: Adiciona um PokemonEletrico ao treinador com o índice `idt`.
- `q idt nome tipo_ataque forca_ataque litros_jato`: Adiciona um PokemonAquatico ao treinador com o índice `idt`.
- `x idt nome tipo_ataque forca_ataque temperatura_explosao`: Adiciona um PokemonExplosivo ao treinador com o índice `idt`.
- `h idt1 idpk1 idt2 idpk2`: Executa uma batalha entre os Pokemons dos treinadores `idt1` e `idt2`.
- `b`: Chama a função `avaliacao_basica()` do arquivo `avaliacao_basica_pokemon.hpp` para avaliação complementar do código.

## Como Executar

1. Compile os arquivos utilizando o arquivo Makefile fornecido:
    ```bash
    Make

2. Execute o comando:
    ```bash
    ./bin/mainPokemon

## Exemplo de uso:

- Entrada:
    ```bash
    t Treinador0
    i 0
    e 0 Pikachu Relampago 5 2
    i 0
    t Treinador1
    q 1 Squirtle Tsunami 5 3
    i 1
    h 0 0 1 0
    h 1 0 0 0
    i 0
    i 1

- Saída:
    ```bash
    Nome: Treinador0
    ----------
    Nenhum Pokemon cadastrado!
    ----------
    Nome: Treinador0
    ----------
    Pokemon: Pikachu
    Tipo ataque: Relampago
    Dano: 10
    Energia: 100
    ----------
    Nome: Treinador1
    ----------
    Pokemon: Squirtle
    Tipo ataque: Tsunami
    Dano: 8
    Energia: 100
    ----------
    ### Batalha ###
    Treinador0 (Pikachu) vs. Treinador1 (Squirtle)
    Pikachu!
    Relampago!
    Bzzzz!
    Dano: 10
    Squirtle!
    Energia: 90
    #########
    ### Batalha ###
    Treinador1 (Squirtle) vs. Treinador0 (Pikachu)
    Squirtle!
    Tsunami!
    Splash!
    Dano: 8
    Pikachu!
    Energia: 92
    #########
    Nome: Treinador0
    ----------
    Pokemon: Pikachu
    Tipo ataque: Relampago
    Dano: 10
    Energia: 92
    ----------
    Nome: Treinador1
    ----------
    Pokemon: Squirtle
    Tipo ataque: Tsunami
    Dano: 8
    Energia: 90
    ----------


## Requisitos

- C++11 ou superior

## Autor

- Warley Júnio Vieira Ribeiro Batista - (Desenvolvedor Principal)




