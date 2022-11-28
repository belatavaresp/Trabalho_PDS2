#ifndef ALIMENTO_H
#define ALIMENTO_H

class Alimento{
    private:
    //codigo do alimento
    int codigo;
    //calorias por 100g/100ml
    double calorias;
    //quantos g/ml corresponde uma porcao
    int porcao;

    public:
    //construtor/destrutor
    Alimento();
    ~Alimento();

    //metodos get e set
    int getCodigo();
    void setCodigo(int);
    
    double getCalorias();
    void setCalorias(double);

    int getPorcao();
    void setPorcao(int);

    //calcula o total de calorias do alimento
    virtual double totalCalorico() = 0;
    
    
};

#endif