#include <iostream>
using namespace std;

main () {


    while(true){
        setlocale(LC_ALL, "portuguese");
        int A;
        cout<<"Digite um n�mero: \n"; cin>>A;
        

        if (A>=0) cout<< "O n�mero � positivo \n"; else cout<< "O n�mero � negativo \n";
        if (A % 2 == 0) cout<< "O n�mero � par \n"; else cout<< "O n�mero � �mpar \n";
    }






}
