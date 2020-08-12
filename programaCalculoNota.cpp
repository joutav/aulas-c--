#include <iostream>
using namespace std;
main() {
    setlocale(LC_ALL, "portuguese");    
    int numeroProvas;
    int somaNotas;
    float media;

    cout<<"Quantas provas há no ano? \n"; cin>>numeroProvas;
    for(int i = 1; i<=numeroProvas; i++){
         cout<<"Qual a nota da prova " << i << endl;
         float nota; 
         cin>>nota;
         somaNotas += nota;

    }

    media = float(somaNotas)/float(numeroProvas);
    cout<<"A média de notas é " << media <<endl;

    
    if(media<=4){
    
         cout<<"O aluno foi reprovado.";
    
    } else if (media<=10 && media >= 6) {
    
        cout<<"O aluno foi aprovado.";
    } else if(media == 5) { 
    
        cout<<"O aluno está de recuperação.";
    }


}   
