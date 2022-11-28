#include "alimento_liquido.hpp"

AlimentoLiquido::AlimentoLiquido(std::string nome,double calorias,int porcao,int copo){
    setNome(nome);
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