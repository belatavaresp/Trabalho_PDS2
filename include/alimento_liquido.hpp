#ifndef ALIMENTO_LIQUIDO_H
#define ALIMENTO_LIQUIDO_H

#include "alimento.hpp"

class AlimentoLiquido : public Alimento
{
    private:
        int copo;
    public:
        //construtor/destrutor
        AlimentoLiquido(int,double,int,int);
        ~AlimentoLiquido();

        //metodos get e set
        int getCopo();
        void setCopo(int);

        //calcula o total de calorias do alimento
        double totalCalorico();
};

#endif