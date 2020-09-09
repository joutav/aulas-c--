#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "portuguese");

    int num;
    int i = 1;
    int somaDosDivisores = 0;
    
    do {
        cout<<"Insira um número inteiro para saber se ele é perfeito: "; cin>>num;
    } while(num<0);
    
    while(i<num){
        if(num % i == 0){
            somaDosDivisores += i;
        }
        i++;
    }

    if(somaDosDivisores == num){
        cout << "O número "<<num<<" é perfeito"<<endl;
    } else {
        cout << "O número "<<num<<" não é perfeito"<<endl;
    }

    system("PAUSE");



}
