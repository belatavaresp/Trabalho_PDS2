#include "usuario.hpp"

Usuario::Usuario(std::string nome, int idade, char genero,
                int altura, int peso, std::string email, int limite){
    setNome(nome);
    setIdade(idade);
    setGenero(genero);
    setAltura(altura);
    setPeso(peso);
    setEmail(email);
    if(limite != 0){
        setLimite(limite);
    }else{
        this->limite = calculaLimite();
    }
    this->diario = new Diario();
}

std::string Usuario::getNome(){
    return this->nome;
}
void Usuario::setNome(std::string nome){
    this->nome = nome;
}

int Usuario::getIdade(){
    return this->idade;
}
void Usuario::setIdade(int idade){
    this->idade = idade;
}

char Usuario::getGenero(){
    return this->genero;
}
void Usuario::setGenero(char genero){
    this->genero = genero;
}

int Usuario::getAltura(){
    return this->altura;
}
void Usuario::setAltura(int altura){
    this->altura = altura;
}

int Usuario::getPeso(){
    return this->peso;
}
void Usuario::setPeso(int peso){
    this->peso = peso;
}

std::string Usuario::getEmail(){
    return this->email;
}
void Usuario::setEmail(std::string email){
    this->email = email;
}

int Usuario::getLimite(){
    return this->limite;
}
void Usuario::setLimite(int limite){
    this->limite = limite;
}

int calculaLimite(){
    // implementar calculo
}

Diario* Usuario::getDiario(){
    return this->diario;
}
