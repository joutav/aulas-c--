#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "portuguese");

    unsigned int num;
    int i = 1;
    int somaDosDivisores = 0;
    cout<<"Insira um número para saber se ele é perfeito: "; cin>>num;

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
