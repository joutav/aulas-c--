#include <iostream>
using namespace std;


int diferenca(int a, int b){
    if(a>b) return a - b;
    return b - a ;
}

int main(){

    setlocale(LC_ALL, "portuguese");

    int num1, num2;


    cout<<"Digite o primeiro n�mero: "; cin>>num1;
    cout<<"Digite o segundo n�mero: "; cin>>num2;

    cout<<"A diferen�a entre o maior n�mero e o menor �: "<<diferenca(num1, num2)<<endl;

    system("PAUSE");

    return 0;




}