#include "alimento_solido.hpp"

AlimentoSolido::AlimentoSolido(std::string nome,double calorias,double carboidratos,double gorduras,double proteinas,int unidade){
    setNome(nome);
    setCalorias(calorias);
    setCarboidratos(carboidratos);
    setGorduras(gorduras);
    setProteinas(proteinas);
    setUnidade(unidade);
}

int AlimentoSolido::getUnidade(){
    return this->unidade;
}
void AlimentoSolido::setUnidade(int unidade){
    this->unidade = unidade;
}

double AlimentoSolido::totalCalorico(){
    return getCalorias() * getUnidade();
}