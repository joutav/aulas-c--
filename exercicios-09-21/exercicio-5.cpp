#include <iostream>
using namespace std;


void medidasDoRetangulo(float l1, float l2, float &A, float &P){
    A = l1*l2;
    P = (2*l1) + (2*l2);
}

int main(){

    setlocale(LC_ALL, "portuguese");

    float num1, num2, area, perimetro;

    cout << "Informe o primeiro lado do retangulo: "; cin >>num1;
    cout << "Informe o segundo lado do retangulo: "; cin >>num2;
    medidasDoRetangulo(num1, num2, area, perimetro);

    cout << "O perimetro é " << perimetro << " e a área é " << area << endl;

    system("PAUSE");


    return 0;




}