#include "alimento_liquido.hpp"

AlimentoLiquido::AlimentoLiquido(int codigo,double calorias,double carboidratos,double gorduras,double proteinas,int copo){
    setCodigo(codigo);
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

void AlimentoLiquido::descricao(){
    
}