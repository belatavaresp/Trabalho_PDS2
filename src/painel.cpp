#include "painel.hpp"
#include <iterator>

void Painel::setAtivo(bool ativo){
    //exibe mensagem quando o app é fechado
    if(ativo == false){
        std::cout << "Fechando..." << std::endl;
        this->~Painel();
    }
    this->ativo = ativo;
}

void Painel::tabelaUniversal(){
    //implementar leitura do arquivo com as informações
}

Usuario* Painel::registrarUsuario(std::string nome, int idade, char genero,
                          int altura, int peso, std::string email, int limite){
    
    //constroi um objeto usuário

    Usuario* usuario = new Usuario (nome,idade,genero,altura,peso,email,limite);
    std::cout << "Usuario registrado" << std::endl; 

    return usuario;
}

void Painel::abrirDiario(std::vector<Usuario*> usuarios){
    
    //confere se existe pelo menos um usuário registrado
    if(!usuarios.size()){
        std::cout << "Não existem usuários cadastrados" << std::endl
        << "Crie um novo usuário para acessar o diário" << std::endl;
        return;
    }

    //procura ocorrência do usuario digitado nos registros
    bool achou = false;
    while(!achou){
        std::cout << "Digite o usuário desejado: ";
        std::string nomeUsuario;
        std::cin >> nomeUsuario;

        for(auto it = usuarios.begin(); it != usuarios.end(); it++){
            //caso acha o usuario, exibe entradas de seu diario
            if((*it)->getNome() == nomeUsuario){
                (*it)->mostrarEntradas();
                achou = true;
            }

            //caso não acha pergunta se quer procurar outro usuario
            if(!achou){
                std::cout << "Usuario nao encontrado" << std::endl;
                std::cout << "Digitar novo usuario? S/N" << std::endl;
                char caso;
                std::cin >> caso;
                if(caso == 'N'){
                    std::cout << "Voltando para o painel inicial..." << std::endl;
                    return;
                }
            }
        }  
    }
    return;    
}
