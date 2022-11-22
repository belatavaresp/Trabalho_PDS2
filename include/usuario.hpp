#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include "diario.hpp"

//classe com os dados de um usuario
class Usuario{
    private:
    std::string nome;
    int idade;
    char genero;
    int altura;
    int peso;
    std::string email;
    int limite;
    

    public:
    //existe um diario associado a cada usuário
    Diario* diario;

    //construtor/destrutor
    Usuario(std::string,int,char,int,int,std::string,int);
    ~Usuario();

    //metodos get e set
    std::string getNome();
    void setNome(std::string);

    int getIdade();
    void setIdade(int);

    char getGenero();
    void setGenero(char);

    int getAltura();
    void setAltura(int);

    int getPeso();
    void setPeso(int);

    std::string getEmail();
    void setEmail(std::string);

    int getLimite();
    void setLimite(int);
    
    Diario* getDiario();

    //calcula o limite calórico ideal ou inserido
    int calculaLimite();
};

#endif