#include <iostream>
using namespace std;

main () {


    while(true){
        setlocale(LC_ALL, "portuguese");
        int A;
        cout<<"Digite um número: \n"; cin>>A;
        

        if (A>=0) cout<< "O número é positivo \n"; else cout<< "O número é negativo \n";
        if (A % 2 == 0) cout<< "O número é par \n"; else cout<< "O número é ímpar \n";
    }






}
