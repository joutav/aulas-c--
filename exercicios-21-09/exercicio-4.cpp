#include <iostream>
using namespace std;


void MMM(int &A, int &B, int &C){
    int valor1 = A;
    int valor2 = B;
    int valor3 = C;

    if(valor1>valor2 && valor1>valor3) {
        C = valor1;
        if(valor3 > valor2) {
            B = valor3;
            A = valor2;
        } else {
            A = valor3;
        }
    } else {
        if(valor2>valor3){
            C = valor2;
            B = valor3;
        }
        if(valor1 > valor2) {
            B = valor1;
            A = valor2;
        }
    }
}   


int main(){

    setlocale(LC_ALL, "portuguese");

    int num1, num2, num3;

    cout << "Informe o primeiro número: "; cin >>num1;
    cout << "Informe o segundo número: "; cin >>num2;
    cout << "Informe o terceiro número: "; cin >>num3;

    MMM(num1, num2, num3);

    cout << "O menor número é " << num1 << ", o maior é " << num3 <<" e o do meio é "<<num2<< endl;

    system("PAUSE");


    return 0;




}