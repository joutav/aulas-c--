#include <iostream>
using namespace std;
main() {
    setlocale(LC_ALL, "portuguese");    

    int mes;
    
    cout<<"Digite o m�s "; cin>>mes;
    
 



    switch(mes) { 
        case(1):
            cout<<"O n�mero corresponde � janeiro.";
            break;
        case(2):
            cout<<"O n�mero corresponde � fevereiro.";
            break;
        case(3):
            cout<<"O n�mero corresponde � mar�o";
            break;
        case(4):
            cout<<"O n�mero corresponde � abril.";
            break;
        case(5):
            cout<<"O n�mero corresponde � maio.";
            break;
        case(6):
            cout<<"O n�mero corresponde � junho.";
            break;
        case(7):
            cout<<"O n�mero corresponde � julho.";
            break;
        case(8):
            cout<<"O n�mero corresponde � agosto.";
            break;
        case(9):
            cout<<"O n�mero corresponde � setembro.";
            break;
        case(10):
            cout<<"O n�mero corresponde � outubro.";
            break;
        case(11):
            cout<<"O n�mero corresponde � novembro.";
            break;
        case(12):
            cout<<"O n�mero corresponde � dezembro.";
            break;
        default:
            cout<<"N�mero digitado n�o corresponde � um m�s.";

            
    
            
	}
}

