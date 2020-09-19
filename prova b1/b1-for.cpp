#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "portuguese");
    
    int numero, contadorDivisores = 0;
    cout<<"Digite um número para verificar se ele é primo: "; cin>>numero;
    
    while(numero<0) {
        cout<<"Apenas números naturais podem ser primos, digite outro número: "; cin>>numero;
    }
    
    for(int i = 1; i <= numero; i++){
        if(numero%i == 0) contadorDivisores++;
        if(contadorDivisores>2) break;
    }
    if(contadorDivisores == 2) {
        cout<<"O número "<<numero<<" é primo"<<endl;
    } else cout<<"O número "<<numero<<" não é primo"<<endl;
}
