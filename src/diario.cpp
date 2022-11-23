#include "diario.hpp"
#include <iostream>
#include <iterator>

Diario::Diario(){
    this->total = calcularTotal();
}

//por que não usar o código do alimento e sim o objeto??
//não seria melhor diario ser um map de alimentos e quantidades??
//void Diario::inserirEntrada(Alimento alimento, int quantidade){}

int Diario::calcularTotal(){
    int soma = 0;
    for(auto it = this->entradas.begin(); it != this->entradas.end(); it++){
        soma += (it->calorias * it->porcao);
        //diferenciar porçao e quantidade
    }
    return soma;
}

int Diario::getTotal(){
    return this->total;
}

//exibir alerta
void Diario::exibirTotal(){
    //usar tratamento de excessoes para fazer o alerta
    std::cout << this->calcularTotal() << std::endl;
}
