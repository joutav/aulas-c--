#include <iostream>
using namespace std;


int somaDiferencaProduto(int a, int b){
    int soma = a + b;
    int produto = a * b;
    int subtracao = a - b; 
    cout<<soma<<", "<<produto<<", "<<subtracao<<endl;
}

int main(){

    setlocale(LC_ALL, "portuguese");

    int num1, num2, soma, produto, subtracao;


    cout<<"Digite o primeiro número: "; cin>>num1;
    cout<<"Digite o segundo número: "; cin>>num2;

    

    cout<<"A soma, produto e subtração são respectivamentes: "<<endl;
    somaDiferencaProduto(num1, num2);

    system("PAUSE");

    return 0;




}