#include <iostream>
#include <locale.h>

using namespace std;


class Pedido{

    private:

    int numero_faturado;
    int quantidade;
    int preco_unitario;

    string descricao;


    public:


    Pedido(int Numero_faturado, string Descricao, int Quantidade, double multi){

            numero_faturado = Numero_faturado;
            descricao = Descricao;

            quantidade = (Quantidade >= 0) ? Quantidade : 0; // operador ternario
            preco_unitario = (multi > 0) ? multi : 0.0;


 }
    void setnumero_faturadoSET_GET(int Numero_faturado){

            numero_faturado = Numero_faturado;

    }

    int getnumero_faturadoSET_GET() const { // inteiro

            return numero_faturado;

    }


    void setDescricaoSET_GET (string Descricao){


            descricao = Descricao;

    }


    string getDescricaoSET_GET() const{

            return descricao;
    }



    void setQuantidadeSET_GET (int Quantidade){


            quantidade = (Quantidade >= 0) ? Quantidade : 0;

    }



    int getQuantidadeSET_GET () const {

            return quantidade;

    }


    void setpreco_unitarioSET_GET (double multi){


            preco_unitario = ( multi > 0) ? multi : 0.0;


    }


    double getpreco_unitarioSET_GET () const{

            return preco_unitario;

    }

 // método TotalPedido que calcula o valor da fatura

    double TotalPedido() const {
        return quantidade * preco_unitario;
    }


};




int main() {

    setlocale (LC_ALL, "Portuguese");


    int numero_faturado;
    int quantidade;
    int preco_unitario;

    string descricao;

    cout << "DIGITE O CÓDIGO PRODUTO: ";
    cin >> numero_faturado;

    cout << "DIGITE A DESCRIÇÃO DO ITEM PARA A EMISSÃO: ";
    cin.ignore();
    getline(cin, descricao);

    cout << "DIGITE A QUANTIDADE COMPRADA: ";
    cin >> quantidade;

    cout << "DIGITE O PREÇO DO ITEM: ";
    cin >> preco_unitario;



    // cria o Pedido

    Pedido pedido1(numero_faturado, descricao, quantidade, preco_unitario); // quantidade e valor do monitor

    // imprime os valores dos atributos do objeto

    cout << "\n\nCódigo do Produto : " << pedido1.getnumero_faturadoSET_GET() << endl;
    cout << "Descrição do item: " << pedido1.getDescricaoSET_GET() << endl;
    cout << "Quantidade comprada: " << pedido1.getQuantidadeSET_GET() << endl;
    cout << "Preço unitário: R$" << pedido1.getpreco_unitarioSET_GET() << endl;

    // calcula e imprime o total da fatura
    cout << "\nTotal da fatura: R$" << pedido1.TotalPedido() << endl;

    return 0;
}
