#include <iostream>
using namespace std;
main() {
    setlocale(LC_ALL, "portuguese");    

    float A, B;
    int funcao;

    cout<<"Escolhe a função a ser executada entre os 2 numeros \n";
    cout<<"1 - Media entre os números digitados \n";
    cout<<"2 - Diferença do maior pelo menor \n";
    cout<<"3 - Produto entre nos números digitados \n";
    cout<<"4 - Divisão do primeiro pelo segundo \n\n";
    
    cout<<"Digite a função: "; cin>>funcao;
    
    while(funcao>4||funcao<1) {
        fflush(stdin);
    	cout<<"Ei, número inválido. Digite Novamente: "; cin>>funcao;
	}
    
    cout<<"Digite o primeiro número: "; cin>>A;
    cout<<"Digite o segundo número: "; cin>>B;
 



    switch(funcao){
        case(1):
            cout<<"A média entre os números é " << (A+B)/2;
            break;
        case(2):
            if(A>B) cout<<"A diferença entre os números é " << A-B;
             else cout<<"A diferença entre os números é " << B-A;
             break;
        case(3):
            cout<<"O produto dos números é " << A*B;
            break;
        case(4):
            cout<<"A divisão do primeiro pelo segundo é " << A/B;
            break;

            
    
            
    }











}
