#ifndef ALIMENTO_H
#define ALIMENTO_H

class Alimento{
    private:
    //codigo do alimento
    int codigo;
    //calorias por 100g/100ml
    double calorias;
    //carboidratos por 100g/100ml
    double carboidrato;
    //gorduras por 100g/100ml
    double gordura;
    //proteinas por 100g/100ml
    double proteina;

    public:
    //construtor/destrutor
    Alimento();
    ~Alimento();

    //metodos get e set
    int getCodigo();
    void setCodigo(int);
    
    double getCalorias();
    void setCalorias(double);

    double getCarbs();
    void setCarbs(double);

    double getCalorias();
    void setCalorias(double);

    double getCalorias();
    void setCalorias(double);

    //calcula o total de calorias do alimento
    virtual double totalCalorico() = 0;
    
    
};

#endif