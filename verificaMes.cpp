#include <iostream>
using namespace std;
main() {
    setlocale(LC_ALL, "portuguese");    

    int mes;
    
    cout<<"Digite o mês "; cin>>mes;
    
 



    switch(mes) { 
        case(1):
            cout<<"O número corresponde à janeiro.";
            break;
        case(2):
            cout<<"O número corresponde à fevereiro.";
            break;
        case(3):
            cout<<"O número corresponde à março";
            break;
        case(4):
            cout<<"O número corresponde à abril.";
            break;
        case(5):
            cout<<"O número corresponde à maio.";
            break;
        case(6):
            cout<<"O número corresponde à junho.";
            break;
        case(7):
            cout<<"O número corresponde à julho.";
            break;
        case(8):
            cout<<"O número corresponde à agosto.";
            break;
        case(9):
            cout<<"O número corresponde à setembro.";
            break;
        case(10):
            cout<<"O número corresponde à outubro.";
            break;
        case(11):
            cout<<"O número corresponde à novembro.";
            break;
        case(12):
            cout<<"O número corresponde à dezembro.";
            break;
        default:
            cout<<"Número digitado não corresponde à um mês.";

            
    
            
	}
}

