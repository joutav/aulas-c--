#include <iostream>
using namespace std;

main(){

    setlocale(LC_ALL, "portuguese");

    int idade;
    int identificador;
    float nota;
    int contadorDeNotas10 = 0;
    int somaDasIdades = 0;
    int contadorDeNotas5ouMenos = 0;
    int maiorIdade = 0;
    int identificadorMaisVelha;
    int contadorDePessoas = 1;


    while(contadorDePessoas<=200){
        cout<<"#####PESSOA"<<contadorDePessoas<<"#####"<<endl;
        cout << "Insira a nota de 0 a 10: "; cin >> nota;
        cout<<endl;
        if(nota == 10) contadorDeNotas10++;
        if(nota<=5) contadorDeNotas5ouMenos++;

        cout << "Insira a idade: "; cin >> idade;
        cout<<endl;
        somaDasIdades += idade;
        
        cout << "Insira o identificador: "; cin >> identificador;
        contadorDePessoas++;
        cout<<endl;
        
        
        if(idade>maiorIdade) {
        	maiorIdade = idade;
            identificadorMaisVelha = identificador;
        } 
        

        
    }


    cout<<"O número de respostas 10 foram " << contadorDeNotas10<<endl;
    cout<<"A média de idade das pessoas que responderam o questionário é " << somaDasIdades/contadorDePessoas<<endl;
    cout << "A percentagem de pessoas que responderam 5 ou menos para a opinião da peça é " << contadorDeNotas5ouMenos/contadorDePessoas*100<<"%"<<endl;
    cout << "O identificador da pessoa mais velha é " << identificadorMaisVelha<<endl;

    system("PAUSE");
}
