#include<iostream>
using namespace std;

main (){


    setlocale(LC_ALL, "portuguese");
    int expectativaDeVida;
    int idade;
    char nome[15];
    
    
    cout<<"Digite seu nome: ";
    cin>>nome;
    cout<<"Seu nome é: "<<nome<<endl;
    fflush(stdin);
    cout<<"Digite seu nome: ";
    cin.getline(nome, 15);
    cout<<"Seu nome é: "<<nome<<endl;
    fflush(stdin);

    cout<<"Informe sua idade: ";
    cin>>idade;
    cout<<"Voce tem "<<365*idade<<" dias de vida";


}
