#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "portuguese");

    int num;
    int i = 1;
    int somaDosDivisores = 0;
    
    do {
        cout<<"Insira um n�mero inteiro para saber se ele � perfeito: "; cin>>num;
    } while(num<0);
    
    while(i<num){
        if(num % i == 0){
            somaDosDivisores += i;
        }
        i++;
    }

    if(somaDosDivisores == num){
        cout << "O n�mero "<<num<<" � perfeito"<<endl;
    } else {
        cout << "O n�mero "<<num<<" n�o � perfeito"<<endl;
    }

    system("PAUSE");



}
