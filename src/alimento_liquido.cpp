#include "alimento_liquido.hpp"

AlimentoLiquido::AlimentoLiquido(int codigo,double calorias,int porcao,int copo){
    setCodigo(codigo);
    setCalorias(calorias);
    setPorcao(porcao);
    setCopo(copo);
}

int AlimentoLiquido::getCopo(){
    return this->copo;
}

void AlimentoLiquido::setCopo(int copo){
    this->copo = copo;
}

double AlimentoLiquido::totalCalorico(){
    return (getPorcao() * getCalorias() / 100 ) * getCopo();
}