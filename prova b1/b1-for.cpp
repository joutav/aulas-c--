#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "portuguese");
    
    int numero, contadorDivisores = 0;
    cout<<"Digite um n�mero para verificar se ele � primo: "; cin>>numero;
    
    while(numero<0) {
        cout<<"Apenas n�meros naturais podem ser primos, digite outro n�mero: "; cin>>numero;
    }
    
    for(int i = 1; i <= numero; i++){
        if(numero%i == 0) contadorDivisores++;
        if(contadorDivisores>2) break;
    }
    if(contadorDivisores == 2) {
        cout<<"O n�mero "<<numero<<" � primo"<<endl;
    } else cout<<"O n�mero "<<numero<<" n�o � primo"<<endl;
}
