#include "painel.hpp"
#include "usuario.hpp"

//mensagem do menu inicial
void mensagemEntrada(){
    std::cout << "\n1 - Mostrar tabela de alimentos" << std::endl 
        << "2 - Registrar usuario" << std::endl
        << "3 - Abrir diário" << std::endl
        << "4 - Fechar app" << std::endl;
}

int main(){
    Painel painel;
    //liga o app
    painel.setAtivo(true);

    //usuarios do app inicializados
    std::vector<Usuario*> usuarios;

    //dados de um usuario a serem recolhidos
    std::string nome;
    int idade;
    char genero;
    int altura;
    double peso;
    std::string email;
    int limite;
    
    //escolha do menu
    int caso;

    //decide se o app permanece aberto ou fecha
    char escolha = 'N';

    //descide se o limite sera inserido pelo usuário
    //ou será calculado pelo próprio app
    char escolhaL = 'S';

    std::cout << "\nBem vindo ao seu painel nutricional!" << std::endl;
    mensagemEntrada();
    std::cout << "\nDigite um comando: ";
    

    do{

        std::cin >> caso;

        switch(caso){
            case 1:
                //imprime os alimentos da tabela
                std::cout << "\n\n\n";
                painel.tabelaUniversal();
                break;
            case 2:
                //coleta os dados e cria novo usuário
                {std::cout << "Digite seu primeiro nome: ";
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
                std::cout << "Gostaria de inserir o limite calórico ideal? S/N" << std::endl;
                std::cin >> escolhaL;
                    if(escolhaL == 'S' || escolhaL == 's'){
                        limite = 0;
                    }else{
                        std::cout << "Digite seu limite: ";
                        std::cin >> limite;
                    }
                std::cout << "\n";

                Usuario* usuario = painel.registrarUsuario(nome,idade,genero,altura,peso,email,limite);
                usuarios.push_back(usuario);
                break;} 
            case 3:
                //abre o menu de funções do diário
                painel.abrirDiario(usuarios);
                break;
            case 4:
                //fecha o app
                std::cout << "Gostaria de fechar o app? S/N " << std::endl;
                std::cin >> escolha;
                if(escolha == 's' || escolha == 'S')
                    painel.setAtivo(false);
                break;
            default:
                //identifica casos inválidos de entrada
                std::cout << "Opção inválida, digite outra..." << std::endl;
                break;
        }

        if(escolha == 'n' || escolha == 'N'){
            mensagemEntrada();
            std::cout << "\nDigite um comando: "; }

    }while(escolha == 'n' || escolha == 'N');
    
}

    