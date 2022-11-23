#include "painel.hpp"
#include "usuario.hpp"

void mensagemEntrada();

int main(){
    Painel painel;
    painel.setAtivo(true);

    std::vector<Usuario*> usuarios;

    std::string nome;
    int idade;
    char genero;
    int altura;
    int peso;
    std::string email;
    int limite;
    
    int caso;
    while(std::cin>>caso){
        switch(caso){
            case 1:
                painel.tabelaUniversal();
                break;
            case 2:
                {std::cout << "Digite seu nome, idade, gênero (m ou f), altura, peso, email e limite de calorias desejado"
                << std::endl;
                std::cin >> nome >> idade >> genero >> altura >> peso >> email >> limite;
                Usuario* usuario = painel.registrarUsuario(nome,idade,genero,altura,peso,email,limite);
                usuarios.push_back(usuario);}
                break;
            case 3:
                painel.abrirDiario(usuarios);
                break;
            case 4:
                painel.setAtivo(false);
                break;
            default:
                break;
        }
    }
}

void mensagemEntrada(){
    std::cout << "Bem vindo ao seu painel nutricional!" << std::endl
        << "1 - Mostrar tabela de alimentos" << std::endl 
        << "2 - Registrar usuario" << std::endl
        << "3 - Abrir diário" << std::endl
        << "4 - Fechar aplicativo" << std::endl;
}