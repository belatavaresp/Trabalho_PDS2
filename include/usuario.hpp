#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include "diario.hpp"

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
    Diario* diario;
    Usuario(std::string,int,char,int,int,std::string,int);
    ~Usuario();

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

    int calculaLimite();

    Diario* getDiario();
};

#endif