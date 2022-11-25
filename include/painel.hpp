#ifndef PAINEL_H
#define PAINEL_H

#include <string>
#include <vector>
#include <iostream>
#include "usuario.hpp"

//classe inicial, painel de entrada do app
class Painel{
    private:
    //variável para ligar e desligar o app
    bool ativo = false;

    public:
    //liga e desliga o app
    void setAtivo(bool ativo);

    //exibe uma tabela de alimentos, seus valores
    //nutricionais e respectivos códigos
    void tabelaUniversal();

    //registra um usuario no app
    Usuario* registrarUsuario(std::string nome, int idade, char genero,
                          int altura, int peso, std::string email, int limite);

    //leva ao diário associado ao usuario passado como parâmetro
    void abrirDiario(std::vector<Usuario*> usuarios);

};

#endif