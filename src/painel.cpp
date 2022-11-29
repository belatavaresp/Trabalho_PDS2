#include "painel.hpp"
#include <iterator>
#include <fstream>
#include <cctype>

void Painel::setAtivo(bool ativo){
    //exibe mensagem quando o app é fechado
    if(ativo == false){
        std::cout << "Fechando..." << std::endl;
    }
    this->ativo = ativo;
}

//função mais comentada, pois não mexemos
//muito com arquivos, para melhor compreensão
void Painel::tabelaUniversal(){
    //cria um fluxo de arquivo
    std::fstream tabela;

    //abre o fluxo tabela com os conteudos do .txt
    tabela.open("lista_alimentos.txt");

    //imprime todas as linhas do arquivos
    if (tabela.is_open())
        std::cout << tabela.rdbuf();

    std::cout << "\n\n\n";

    //fecha o fluxo do arquivo
    tabela.close();
}

Usuario* Painel::registrarUsuario(std::string nome, int idade, char genero,
                          int altura, double peso, std::string email, int limite){
    
    //constroi um objeto usuário
    Usuario* usuario = new Usuario (nome,idade,genero,altura,peso,email,limite);
    std::cout << "Usuario registrado" << "\n\n"; 

    return usuario;
}

void Painel::abrirDiario(std::vector<Usuario*> usuarios){

    //confere se existe pelo menos um usuário registrado
    if(!usuarios.size()){
        std::cout << "Não existem usuários cadastrados" << std::endl
        << "Digite 2 no menu para criar um novo usuário" << std::endl;
        return;
    }

    //procura ocorrência do usuario digitado nos registros
    bool achou = false;
    while(!achou){
        std::cout << "Digite seu email de usuário: ";
        std::string emailUsuario;
        std::cin >> emailUsuario;

        for(auto it = usuarios.begin(); it != usuarios.end(); it++){
            //caso acha o usuario, exibe entradas de seu diario
            if((*it)->getEmail() == emailUsuario){
                //escolha do menu do diário
                char comando;
                //mantem o diário aberto ou fechado
                char sair = 'N';
                do{
                    //abre menu do diário
                    std::cout << "\n\nDigite o comando desejado:" << std::endl
                    << "I - Insere novo alimento no diário" << std::endl
                    << "M - Mostra o total nutricional no diário" << std::endl
                    << "S - Sair do diário e retornar ao menu" << std::endl;
                    //ainda n fizemos
                    //<< "D - Sugere dieta com base no diário" << std::endl;

                    std::cin >> comando;
                    //padroniza a entrada como uppercase
                    comando = std::toupper(comando);

                    switch(comando){
                        case 'I':
                            //atributos da nova entrada
                            int codigo;
                            double ingerido;

                            std::cout << "Código do alimento: ";
                            std::cin >> codigo;
                            std::cout << "\nQuantas gramas/ml você ingeriu? ";
                            std::cin >> ingerido;
                            std::cout << std::endl;

                            (*it)->diario->inserirEntrada(codigo,ingerido);
                            break;
                        case 'M':
                            (*it)->mostrarEntradas();
                            break;
                        case 'S':
                            std::cout << "Gostaria de sair do diário? S/N " << std::endl;
                            std::cin >> sair;
                            break;
                        default:
                            std::cout << "Opção inválida" << std::endl;
                            break;
                    }

                }while(sair == 'n' || sair == 'N');
                achou = true;
                
            }
            if(achou)
                break;
            
        } 
        //caso não acha o usuário digitado pergunta se quer procurar outro usuario
        if(!achou){
            std::cout << "Usuario nao encontrado" << std::endl;
            std::cout << "Digitar novo usuario? S/N" << std::endl;
            char caso;
            std::cin >> caso;
            caso = std::toupper(caso);
            if(caso == 'N'){
                std::cout << "Voltando para o painel inicial..." << std::endl;
                return ;
            }
            
        } 
    }
    return;    
}
