#include "alimento_liquido.hpp"
#include <iostream>

using namespace std;

AlimentoLiquido::AlimentoLiquido(int codigo,double calorias,double carboidratos,double gorduras,double proteinas,int quantidade){
    setCodigo(codigo);
    setCalorias(calorias);
    setCarboidratos(carboidratos);
    setGorduras(gorduras);
    setProteinas(proteinas);
    setQuantidade(quantidade);
}

void AlimentoLiquido::descricao(){
    cout << "Código: " << this->getCodigo() << endl;
    cout << "Porção ingerida: " << this->getQuantidade() << "ml" << endl;

    cout << "Carboidratos: " << (this->getCarboidratos()/100) * (this->getQuantidade()) << endl;
    cout << "Gordura: " << (this->getGorduras()/100) * (this->getQuantidade()) << endl;
    cout << "Proteínas: " << (this->getProteinas()/100) * (this->getQuantidade()) << endl;
    cout << "Calorias: " << this->totalCalorico() << endl;
}