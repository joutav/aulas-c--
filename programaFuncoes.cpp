#include <iostream>
using namespace std;
main() {
    setlocale(LC_ALL, "portuguese");    

    float A, B;
    int funcao;

    cout<<"Escolhe a fun��o a ser executada entre os 2 numeros \n";
    cout<<"1 - Media entre os n�meros digitados \n";
    cout<<"2 - Diferen�a do maior pelo menor \n";
    cout<<"3 - Produto entre nos n�meros digitados \n";
    cout<<"4 - Divis�o do primeiro pelo segundo \n\n";
    
    cout<<"Digite a fun��o: "; cin>>funcao;
    
    while(funcao>4||funcao<1) {
        fflush(stdin);
    	cout<<"Ei, n�mero inv�lido. Digite Novamente: "; cin>>funcao;
	}
    
    cout<<"Digite o primeiro n�mero: "; cin>>A;
    cout<<"Digite o segundo n�mero: "; cin>>B;
 



    switch(funcao){
        case(1):
            cout<<"A m�dia entre os n�meros � " << (A+B)/2;
            break;
        case(2):
            if(A>B) cout<<"A diferen�a entre os n�meros � " << A-B;
             else cout<<"A diferen�a entre os n�meros � " << B-A;
             break;
        case(3):
            cout<<"O produto dos n�meros � " << A*B;
            break;
        case(4):
            cout<<"A divis�o do primeiro pelo segundo � " << A/B;
            break;

            
    
            
    }











}
