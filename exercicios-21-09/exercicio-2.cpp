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


    cout<<"Digite o primeiro n�mero: "; cin>>num1;
    cout<<"Digite o segundo n�mero: "; cin>>num2;

    

    cout<<"A soma, produto e subtra��o s�o respectivamentes: "<<endl;
    somaDiferencaProduto(num1, num2);

    system("PAUSE");

    return 0;




}