#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "portuguese");

    int quantidadeNumeros = 0, contador = 1, numero, somaNumeros = 0, produtoNumeros = 1;

    cout<<"Informe a quantidade de n�meros(0/negativo para sair): "; cin>>quantidadeNumeros;
    do{   
        if(quantidadeNumeros>0){
            cout<<"Digite o n�mero("<<contador<<"/"<<quantidadeNumeros<<"): "; cin>>numero;
            somaNumeros += numero;
            produtoNumeros *= numero;
            contador++;
        }
    }while(contador <= quantidadeNumeros);

    if(quantidadeNumeros>0){
        cout<<"A soma dos n�meros � "<<somaNumeros<<endl;
        cout<<"O produto dos n�meros � "<<produtoNumeros<<endl;
        cout<<"A m�dia dos n�meros � "<<float(somaNumeros)/float(quantidadeNumeros)<<endl;
        cout<<"Fim da execu��o"<<endl;


    } else cout<<"Fim da execu��o"<<endl;

}