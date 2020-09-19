#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "portuguese");

    int quantidadeNumeros = 0, contador = 1, numero, somaNumeros = 0, produtoNumeros = 1;

    cout<<"Informe a quantidade de números(0/negativo para sair): "; cin>>quantidadeNumeros;
    do{   
        if(quantidadeNumeros>0){
            cout<<"Digite o número("<<contador<<"/"<<quantidadeNumeros<<"): "; cin>>numero;
            somaNumeros += numero;
            produtoNumeros *= numero;
            contador++;
        }
    }while(contador <= quantidadeNumeros);

    if(quantidadeNumeros>0){
        cout<<"A soma dos números é "<<somaNumeros<<endl;
        cout<<"O produto dos números é "<<produtoNumeros<<endl;
        cout<<"A média dos números é "<<float(somaNumeros)/float(quantidadeNumeros)<<endl;
        cout<<"Fim da execução"<<endl;


    } else cout<<"Fim da execução"<<endl;

}