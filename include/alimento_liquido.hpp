#ifndef ALIMENTO_LIQUIDO_H
#define ALIMENTO_LIQUIDO_H

#include "alimento.hpp"

class AlimentoLiquido : public Alimento
{
    public:
        //construtor
        AlimentoLiquido(int,double,double,double,double,int);

        virtual void descricao() override;

};

#endif