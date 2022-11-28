#include "alimento_solido.hpp"

//vamos ter q mudar a estrutura dos alimentos
//pra ter calorias, proteinas, gorduras ...

AlimentoSolido::AlimentoSolido(int codigo,double calorias,int porcao,int unidade){
    setCodigo(codigo);
    setCalorias(calorias);
    setPorcao(porcao);
    setUnidade(unidade);
}

int AlimentoSolido::getUnidade(){
    return this->unidade;
}
void AlimentoSolido::setUnidade(int unidade){
    this->unidade = unidade;
}

double AlimentoSolido::totalCalorico(){
    return (getPorcao() * getCalorias() / 100 )* getUnidade();
}