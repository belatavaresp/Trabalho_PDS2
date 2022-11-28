#include "alimento.hpp"

Alimento::Alimento(){}

void Alimento::setCodigo(int codigo){
    this->codigo = codigo;
}
int Alimento::getCodigo(){
    return this->codigo;
}

void Alimento::setCalorias(double calorias){
    this->calorias = calorias;
}
double Alimento::getCalorias(){
    return this->calorias;
}


double totalCalorico(){}