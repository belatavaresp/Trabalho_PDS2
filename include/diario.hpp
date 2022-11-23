#ifndef DIARIO_H
#define DIARIO_H

#include "alimento.hpp"
#include <vector>

//classe que lista os alimentos ingeridos
class Diario{
    public:
    
    int total;

    public:
    //entradas devem ser publicas para poderem ser acessadas pelo usuario
    std::vector<Alimento> entradas;

    //construtor
    Diario();

    //insere um alimento no diário
    //void inserirEntrada(Alimento alimento, int quantidade);
    //otimizar recebimento da entrada

    //calcula o total calórico
    int calcularTotal();

    //retorna o total calórico atual
    int getTotal();

    //exibe o total e alerta quando o limite é ultrapassado
    void exibirTotal();
};

#endif