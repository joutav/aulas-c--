#include <iostream>
using namespace std;

main () {
    setlocale(LC_ALL, "portuguese");

    int idade ;
    int lidosMulher=0;
    int lidosHomem=0;
    int lidosMenoresDez=0;
    int livros=0;
    int somaIdadesHomensMenosCinco=0;
    int totalEntrevistados=0;
    int mulheresMaisCincoLivros=0;
    int totalHomensEntrevistados=0;
    int entrevistadosNaoLeem=0;
    int contadorHomensMenosCinco=0;
    

    do
    {
        cout<<endl;
        cout<<"Novo usu�rio(Insira uma idade menor ou igual a zero para finalizar o programa). \n";
        cout<<"Qual a idade do entrevistado? \n"; cin>>idade;
        
       
        if(idade<10&&idade>0){
            int sexo;
            
                cout<<"Entrou aqui";

                cout<<"Digite: \n 1 - homem, \n 2 - mulher. \n"; cin>>sexo;
                if(sexo==1){
                    totalHomensEntrevistados++;
                    totalEntrevistados++;
                    cout<<"Quantos livros foram lidos? \n"; cin>>livros;
                    lidosMenoresDez+=livros;
                    if(livros<5) {
                        somaIdadesHomensMenosCinco+=idade;
                        contadorHomensMenosCinco++;

                    }
                    
                    if(livros==0) {
                        entrevistadosNaoLeem++;
                    }

                }
                if(sexo==2){
                	totalEntrevistados++;
                    cout<<"Quantos livros foram lidos? \n"; cin>>livros;
                    lidosMenoresDez+=livros;
                    if(livros>=5) {
                        mulheresMaisCincoLivros++;
                    }
                    if(livros==0) {
                    entrevistadosNaoLeem++;
                    }

                            
            	} 
        }
        
        
        
        if(idade>=10){

            int sexo;
            
            
            
                cout<<"Digite: \n 1 - homem, \n 2 - mulher. \n"; cin>>sexo;
                if(sexo==1){
                    totalHomensEntrevistados++;
                    totalEntrevistados++;
                    cout<<"Quantos livros foram lidos? \n"; cin>>livros;
                    if(livros<5) {
                        somaIdadesHomensMenosCinco+=idade;
                        contadorHomensMenosCinco++;

                    }
                    if(livros==0) {
                        entrevistadosNaoLeem++;
                    }
	
                }
                if(sexo==2){
                	totalEntrevistados++;
                    cout<<"Quantos livros foram lidos? \n"; cin>>livros;
                   
				    if(livros>=5) {
                        mulheresMaisCincoLivros++;
                    }
                   
				    if(livros==0) {
                        entrevistadosNaoLeem++;
                    }
                
				
				}
          
			

       
	    }


    } while(idade>=0);
    

    
    
    cout<<"A quantidade total de livros lidos pelos entrevistados menores de 10 anos � " << lidosMenoresDez<<endl<<endl;
    cout<<"A quantidade de mulheres que leram 5 livros ou mais � " << mulheresMaisCincoLivros<< endl<<endl;
    cout<<"A m�dia de idade dos homens que leram menos que 5 livros � " << (float)somaIdadesHomensMenosCinco/(float)contadorHomensMenosCinco<<endl<<endl;
    cout<<"O percentual de pessoas que n�o leram livros � " << ((float)entrevistadosNaoLeem/(float)totalEntrevistados)*100<<"%."<<endl<<endl;



}





