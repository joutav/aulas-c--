#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "portuguese");

    int serie;
    int livrosLidos;
    int gostaRedacao;
    int contador3Serie = 0;
    int livrosMaxQuarta = 0;
    int contador3SerieENaoGostaRedacao = 0;
    int idade;
    int contadorAlunosTotais = 0;

    while(true){
        cout << "Qual idade do aluno?"; cin >> idade;
        if(idade == 0) break;
        cout << "Informe a s�rie (1)Primeira, (2)Segunda, (3)Terceira, (4)Quarta: "; cin>>serie;
        if(serie == 3) contador3Serie++;
        cout << "Quantos livros foram lidos? "; cin>> livrosLidos;
        if(serie == 4 && livrosLidos > livrosMaxQuarta) livrosMaxQuarta = livrosLidos;
        cout << "Gosta de reda��o? (1)Sim, (2)N�o: "; cin>>gostaRedacao;
        if(serie == 3 && gostaRedacao == 2) contador3SerieENaoGostaRedacao++;
		contadorAlunosTotais++;
    }

    cout << "A quantidade de alunos que est� na terceira s�rie � " << contador3Serie<<endl;
    cout << "A maior quantidade de livros lidos por um aluno que est� na quarta s�rie � " << livrosMaxQuarta<<endl;
    cout << "A porcentagem de alunos que n�o gostam de fazer reda��o e que est�o na terceira s�rie � "<< (float(contador3SerieENaoGostaRedacao)/float(contadorAlunosTotais))*100<<"%"<<endl;





    system("PAUSE");




}
