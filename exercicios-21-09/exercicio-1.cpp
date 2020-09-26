#include <iostream>
using namespace std;


int diferenca(int a, int b){
    if(a>b) return a - b;
    return b - a ;
}

int main(){

    setlocale(LC_ALL, "portuguese");

    int num1, num2;


    cout<<"Digite o primeiro número: "; cin>>num1;
    cout<<"Digite o segundo número: "; cin>>num2;

    cout<<"A diferença entre o maior número e o menor é: "<<diferenca(num1, num2)<<endl;

    system("PAUSE");

    return 0;




}