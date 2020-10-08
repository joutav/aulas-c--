#include <iostream>
using namespace std;

main () {
    setlocale(LC_ALL, "portuguese");

    int numerador = 1;
    int denominador = 1;
    float soma = 0;

    while(numerador<=99 && denominador<=50){
        soma += (float) numerador / (float) denominador;
        numerador+=2;
        denominador++;

    }

    cout<<"O resultado da expressão S = 1/1 + 3/2 + 5/3 ....... + 99/50 é " <<soma;


}
