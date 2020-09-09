#include<iostream>
using namespace std;

main(){

    setlocale(LC_ALL, "portuguese");

    int idade, sexo, contadorMaiorIdade = 0, somaMenor14 = 0, contadorMenor14 = 0, contadorPessoas = 0, contadorMulheres = 0;

    cout<<"Insira idade 0 para finalizar a execução"<<endl;

    while(true){
        
        cout<<"Qual idade da pessoa: "; cin>>idade;
        if(idade == 0) break;
        if(idade >= 18) contadorMaiorIdade++;
        if(idade < 14){ 
            somaMenor14 += idade;
            contadorMenor14++;
        }
        cout<<"Qual sexo da pessoa (1)Homem (2)Mulher: "; cin>>sexo;
        contadorPessoas++;
        if(sexo == 2) contadorMulheres++;




    } 

    cout<<"\n--------------------------------------------------------\n\n";

    cout<<"Há "<< contadorMaiorIdade << " pessoas maiores de idade"<<endl;
    cout<<"A media de idade das pessoas infeiores a 14 anos é "<<float(somaMenor14) / float(contadorMenor14)<<endl;
    cout<<"O percentual de mulheres é " << float(contadorMulheres) / float(contadorPessoas) * 100 <<"%"<<endl;

    system("PAUSE");





}
