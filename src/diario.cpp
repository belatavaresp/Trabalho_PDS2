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
    //cria um fluxo de dados para as informações dos alimentos
    std::fstream dados;
    dados.open("dados_alimentos.txt");

    if(!dados.is_open())
        std::cout << "ERRO EM ABRIR ARQUIVO" << std::endl;
    
    //dados a serem extraidos do txt
    int id;
    int calorias;
    double carboidrato;
    double gordura;
    double proteina;

    //extração dos dados para o objeto alimento novo
    while(dados >> id >> calorias >> carboidrato >> gordura >> proteina){
        if(codigo == id){
            if(codigo > 8){
                Alimento* entradaS = new AlimentoSolido(codigo,calorias,carboidrato,gordura,proteina,quantidade);
                entradas.push_back(entradaS);
                std::cout << "Alimento inserido com sucesso" << std::endl;
            }else{
                Alimento* entradaL = new AlimentoLiquido(codigo,calorias,carboidrato,gordura,proteina,quantidade);
                entradas.push_back(entradaL);
                std::cout << "Alimento inserido com sucesso" << std::endl;
            }
            return;
        }
    }

}

int Diario::calcularTotal(){
    int soma = 0;
    for(auto it = this->entradas.begin(); it != this->entradas.end(); it++){
        soma += (*it)->totalCalorico();
    }
    return soma;
}

int Diario::getTotal(){
    return this->total;
}

void Diario::exibirTotal(){
    std::cout << this->calcularTotal() << std::endl;
}
