#include<iostream>
using namespace std;

main(){

    setlocale(LC_ALL, "portuguese");
    
    float valor;
    int codigo;

    cout<<"Digite o valor do produto: "; cin>>valor;
    cout<<"Escolha o meio de pagamento:\n(1)� vista em dinheiro ou cheque, recebe 10% de desconto\n(2)� vista no cart�o de cr�dito, recebe 15% de desconto\n(3)Em duas vezes(a vista e 30), pre�o normal de etiqueta sem juros\n(4) Em duas vezes (30 e 60), pre�o normal de etiqueta mais juros de 10%\n";
    cin>>codigo;
    switch(codigo){
        case (1):
            cout<<"Valor a ser pago � "<<valor*0.9<<endl;
            break;
        case (2):
            cout<<"Valor a ser pago � "<<valor*0.85<<endl;
            break;
        case (3):
            cout<<"Valor a ser pago � "<<valor<<endl;
            break;
        case (4):
            cout<<"Valor a ser pago � "<<valor*1.1<<endl;
            break;
        default:
        cout<<"Meio de pagamento informado inv�lido\n";

    } 

    system("PAUSE");


}
