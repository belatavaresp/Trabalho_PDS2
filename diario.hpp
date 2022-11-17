#ifndef DIARIO_H
#define DIARIO_H

#include "alimento.hpp"
#include "usuario.hpp"
#include <vector>

class Diario{
    private:
    std::vector<Alimento> entradas;
    int total;

    public:
    Diario();
    void inserirEntrada(Alimento alimento, int quantidade);
    void mostrarEntradas();
    int calcularTotal();
    int getTotal();
    //exibir alerta
    void exibirTotal();
};

#endif