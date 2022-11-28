#ifndef ALIMENTO_SOLIDO_H
#define ALIMENTO_SOLIDO_H

#include "alimento.hpp"

class AlimentoSolido : public Alimento
{
    private:
        int unidade;

    public:
        //construtor/destrutor
        AlimentoSolido(std::string,double,int,int);
        ~AlimentoSolido();

        //metodos get e set
        int getUnidade();
        void setUnidade(int);

        //calcula o total de calorias do alimento
        double totalCalorico();
};

#endif