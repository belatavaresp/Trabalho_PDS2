#include "alimento_solido.hpp"

AlimentoSolido::AlimentoSolido(std::string nome,double calorias,int porcao,int unidade){
    setNome(nome);
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