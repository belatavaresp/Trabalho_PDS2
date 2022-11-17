#include "painel.hpp"
#include <iterator>

void Painel::setAtivo(bool ativo){
    if(ativo == false){
        std::cout << "Fechando..." << std::endl;
        this->~Painel();
    }
    this->ativo = ativo;
}

void Painel::tabelaUniversal(){
    //implementar leitura do arquivo
}

Usuario* Painel::registrarUsuario(std::string nome, int idade, char genero,
                          int altura, int peso, std::string email, int limite){
    Usuario* usuario = new Usuario (nome,idade,genero,altura,peso,email,limite);
    std::cout << "Usuario registrado" << std::endl; 
    return usuario;
}

void Painel::abrirDiario(std::vector<Usuario*> usuarios){
    
    if(!usuarios.size()){
        std::cout << "Não existem usuários cadastrados" << std::endl
        << "Crie um novo usuário para acessar o diário" << std::endl;
        return;
    }

    

    bool achou = false;
    while(!achou){
        std::cout << "Digite o usuário desejado: ";
        std::string nomeUsuario;
        std::cin >> nomeUsuario;

        for(auto it = usuarios.begin(); it != usuarios.end(); it++){
            if((*it)->getNome() == nomeUsuario){
                (*it)->getDiario()->mostrarEntradas();
                achou = true;
            }
            if(!achou){
                std::cout << "Usuario nao encontrado" << std::endl;
                std::cout << "Digitar novo usuario? S/N" << std::endl;
                char caso;
                std::cin >> caso;
                if(caso == 'N'){
                    return;
                }
            }
        }  
    }
    return;    
}
