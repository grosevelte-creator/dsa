#include <array>
#include <string>
#include <iostream>


int main()
{
    int tamanho_compras = 3;

    std::array <std::string, 5> compras = {
        "parmesão", //0
        "gorgonzola",//1
        "tomate",//2
    };

    //1. acesso direto
    std::cout << "segundo item: " << compras.at(1) << std::endl;


    //2. interseção no inicio
    for(int i = tamanho_compras; i>0; i--){
        compras.at(i) = compras.at(i - 1);
    }
    compras[0] = "tomilho";
    tamanho_compras++;

    //3. Remoção no meio
    int i_remover = 2;
    for(int i = i_remover; i< tamanho_compras -1; i++){
        compras[i] = compras[i + 1];
    }
    tamanho_compras--;
    compras[3] = "";

    //Travessia (impressao do array todo) - o(n)
    std::cout << std::endl;
    std::cout << "Itens da lista de compras: " << std::endl;
    for(const std::string &item : compras){
        std::cout << "- " << item << std::endl;
    }


    return 0;
}