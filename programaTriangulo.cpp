#include <iostream>
#include <stdio.h>
using namespace std;

main() {
    setlocale(LC_ALL, "portuguese");
    float A,B,C;
   
    while (true) {
        
        cout<<"Informe o valor do lado A \n"; cin>>A;
        cout<<"Informe o valor do lado B \n"; cin>>B;
        cout<<"Informe o valor do lado C \n"; cin>>C;

    
        if((A + B > C) && (B + C > A) && (A + C > B)) {
            
            if (A == B && B == C) {
                cout<<"O triangulo é equilatero. \n \n";
            } else if (A == B || B == C || A == C) {
                    cout<<"O triangulo é equilatero. \n \n";
                }   else {
                        cout<<"O triangulo é escaleno. \n \n";
                    } 
        
        } else {
            cout<<"Não é formado um triangulo com os valores digitados. \n \n";
        }
    }



}
