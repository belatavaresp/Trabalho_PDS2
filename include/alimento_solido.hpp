#ifndef ALIMENTO_SOLIDO_H
#define ALIMENTO_SOLIDO_H

#include "alimento.hpp"

class AlimentoSolido : public Alimento
{
    private:
        int unidade;

    public:
        //construtor/destrutor
        AlimentoSolido(int,double,double,double,double,int);
        ~AlimentoSolido();

        //metodos get e set
        int getUnidade();
        void setUnidade(int);

        virtual void descricao() override;

};

#endif