#ifndef ALIMENTO_H
#define ALIMENTO_H

#include <string>

class Alimento{
    private:

    std::string nome;
    //quantidade por 100g/100ml
    double calorias;
    double carboidratos;
    double gorduras;
    double proteinas;
    //quantos g/ml corresponde uma porcao
    int porcao;

    

    public:
    //construtor/destrutor
    Alimento();
    ~Alimento();

    //metodos get e set
    std::string getNome();
    void setNome(std::string);
    
    double getCalorias();
    void setCalorias(double);

    double getCarboidratos();
    void setCarboidratos(double);

    double getGorduras();
    void setGorduras(double);

    double getProteinas();
    void setProteinas(double);

    //calcula o total de calorias do alimento
    virtual double totalCalorico() = 0;
    
    
};

#endif