#include "painel.hpp"
#include "usuario.hpp"

void mensagemEntrada(){
    std::cout << "\n1 - Mostrar tabela de alimentos" << std::endl 
        << "2 - Registrar usuario" << std::endl
        << "3 - Abrir diário" << std::endl
        << "4 - Fechar app" << std::endl;
}

int main(){
    Painel painel;
    painel.setAtivo(true);

    std::vector<Usuario*> usuarios;

    std::string nome;
    int idade;
    char genero;
    int altura;
    double peso;
    std::string email;
    int limite;
    
    int caso;
    char escolha = 'N';

    std::cout << "\nBem vindo ao seu painel nutricional!" << std::endl;
    mensagemEntrada();
    std::cout << "\nDigite um comando: ";
    

    do{

        std::cin >> caso;

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
                std::cout << "Gostaria de fechar o app? S/N " << std::endl;
                std::cin >> escolha;
                break;
            default:
                std::cout << "Opção inválida, digite outra..." << std::endl;
                break;
        }

        if(escolha == 'n' || escolha == 'N'){
            mensagemEntrada();
            std::cout << "\nDigite um comando: "; }

    }while(escolha == 'n' || escolha == 'N');
    
}

    