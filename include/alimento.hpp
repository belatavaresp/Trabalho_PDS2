#ifndef ALIMENTO_H
#define ALIMENTO_H

class Alimento{
    private:

    int codigo;
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
    int getCodigo();
    void setCodigo(int);
    
    double getCalorias();
    void setCalorias(double);

    double getCarboidratos();
    void setCarboidratos(double);

    double getGorduras();
    void setGorduras(double);

    double getProteinas();
    void setProteinas(double);

    //calcula o total de calorias do alimento
    int totalCalorico();

    virtual void descricao() = 0;
    
};

#endif