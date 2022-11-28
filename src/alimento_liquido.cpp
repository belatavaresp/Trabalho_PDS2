#include "alimento_liquido.hpp"

AlimentoLiquido::AlimentoLiquido(std::string nome,double calorias,double carboidratos,double gorduras,double proteinas,int copo){
    setNome(nome);
    setCalorias(calorias);
    setCarboidratos(carboidratos);
    setGorduras(gorduras);
    setProteinas(proteinas);
    setCopo(copo);
}

int AlimentoLiquido::getCopo(){
    return this->copo;
}

void AlimentoLiquido::setCopo(int copo){
    this->copo = copo;
}

double AlimentoLiquido::totalCalorico(){
    return getCalorias() * getCopo();
}