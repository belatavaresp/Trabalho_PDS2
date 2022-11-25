#include "painel.hpp"
#include "usuario.hpp"

void mensagemEntrada(){
    std::cout << "Bem vindo ao seu painel nutricional!" << std::endl
        << "1 - Mostrar tabela de alimentos" << std::endl 
        << "2 - Registrar usuario" << std::endl
        << "3 - Abrir diário" << std::endl
        << "4 - Fechar aplicativo" << "\n\n";
}

int main(){
    Painel painel;
    painel.setAtivo(true);

    mensagemEntrada();

    std::vector<Usuario*> usuarios;

    std::string nome;
    int idade;
    char genero;
    int altura;
    double peso;
    std::string email;
    int limite;
    
    int caso;
    //fazer um do-while pra mostrar o menu dnv dps da opção
    while(std::cin>>caso){
        switch(caso){
            case 1:
                //ta funcionando
                std::cout << "\n\n\n";
                painel.tabelaUniversal();
                break;
            case 2:
                //ta funcionando
                {std::cout << "Digite seu nome: ";
                //so ta fazendo com o primeiro nome
                std::cin >> nome;
                std::cout << "\n";
                std::cout << "Digite sua idade: ";
                std::cin >> idade; 
                std::cout << "\n";
                std::cout << "Digite seu gênero (f ou m): ";
                std::cin >> genero;
                std::cout << "\n";
                std::cout << "Digite sua altura (cm): ";
                std::cin >> altura;
                std::cout << "\n";
                std::cout << "Digite seu peso (kg): ";
                std::cin >> peso;
                std::cout << "\n";
                std::cout << "Digite seu email: ";
                std::cin >> email;
                std::cout << "\n";
                std::cout << "Digite seu limite calórico: ";
                std::cin >> limite;
                std::cout << "\n";
                Usuario* usuario = painel.registrarUsuario(nome,idade,genero,altura,peso,email,limite);
                usuarios.push_back(usuario);}
                break; 
            case 3:
                //tem q testar ainda
                painel.abrirDiario(usuarios);
                break;
            case 4:
                //ta funcionando
                painel.setAtivo(false);
                return 0;
                break;
            default:
                break;
        }
    }
}

    