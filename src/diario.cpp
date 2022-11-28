#include "diario.hpp"
#include "alimento_liquido.hpp"
#include "alimento_solido.hpp"
#include "alimento.hpp"
#include <iostream>
#include <iterator>
#include <fstream>

Diario::Diario(){
    this->total = calcularTotal();
}

void Diario::inserirEntrada(int codigo, int quantidade){
    //pegar o codigo e achar o alimento ne
    if(codigo > 8)
        AlimentoSolido* entrada = new AlimentoSolido();


    std::fstream dados;
    dados.open("dados_alimentos.txt");

    if(!dados.is_open())
        std::cout << "ERRO EM ABRIR ARQUIVO" << std::endl;
    
    //ccalma n sei oq fazer
    while(dados << )
}

int Diario::calcularTotal(){
    int soma = 0;
    for(auto it = this->entradas.begin(); it != this->entradas.end(); it++){
        
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
