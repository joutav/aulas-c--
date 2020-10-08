#include <iostream>
using namespace std;


int medidasDoRetangulo(float l1, float l2, float &A, float &P){
    A = l1*l2;
    P = (2*l1) + (2*l2);
    if(l1 == l2) return 1;
    return 0;
    
}

int main(){

    setlocale(LC_ALL, "portuguese");

    string tipo;
    float num1, num2, area, perimetro;

    cout << "Informe o primeiro lado: "; cin >>num1;
    cout << "Informe o segundo lado: "; cin >>num2;
    if (medidasDoRetangulo(num1, num2, area, perimetro) == 1){
        tipo = "quadrado";
    } else tipo = "retangulo";

    cout << "O perimetro do "<<tipo<<" é " << perimetro << " e a área é " << area << endl;

    system("PAUSE");


    return 0;




}