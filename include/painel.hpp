#ifndef PAINEL_H
#define PAINEL_H

#include <string>
#include <vector>
#include <iostream>
#include "usuario.hpp"

class Painel{
    private:
    bool ativo = false;

    public:
    void setAtivo(bool ativo);
    void tabelaUniversal();
    Usuario* registrarUsuario(std::string nome, int idade, char genero,
                          int altura, int peso, std::string email, int limite);
    void abrirDiario(std::vector<Usuario*> usuarios);

    ~Painel();
};

#endif