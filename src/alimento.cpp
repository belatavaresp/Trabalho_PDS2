#include "alimento.hpp"

Alimento::Alimento(){}

void Alimento::setNome(std::string nome){
    this->nome = nome;
}
std::string Alimento::getNome(){
    return this->nome;
}

void Alimento::setCalorias(double calorias){
    this->calorias = calorias;
}
double Alimento::getCalorias(){
    return this->calorias;
}

void Alimento::setPorcao(int porcao){
    this->porcao = porcao;
}
int Alimento::getPorcao(){
    return this->porcao;
}

double totalCalorico(){}