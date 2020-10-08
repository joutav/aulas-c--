#include <iostream>
using namespace std;



int encontraIndiceVazio (int vetor[], int numeroElementos){
    int indice;
    
    for(int i=0; i < numeroElementos; i++){
        if(vetor[i] == -1){
            indice = i;
            break;
        }

    }
 
    return indice;
}
int encontraTamanhoPreenchidoVetor (int vetor[], int numeroElementos){
    int tamanho = 0;
    
    for(int i=0; i < numeroElementos; i++){
        if(vetor[i] != -1){
            tamanho++;
        } else break;

    }
 
    return tamanho;
}



int main() {

    setlocale(LC_ALL, "portuguese");

    int numeroElementos, numero;


    cout<<"Quantos elementos serão analisados?"<<endl;
    cin >> numeroElementos;

    int vetorPar[numeroElementos];
    int vetorImpar[numeroElementos];

    for(int i=0; i < numeroElementos; i++){
        vetorPar[i] = -1;
        vetorImpar[i] = -1;
    }




    for(int i=0; i<numeroElementos; i++){
        cout<<"Digite o elemento, APENAS POSITIVOS, ("<<i+1<<"/"<<numeroElementos<<"): "; cin >> numero;
        
        if(numero % 2 == 0){
            int indice = encontraIndiceVazio(vetorPar, numeroElementos);
            vetorPar[indice] = numero;
        } else {
            int indice = encontraIndiceVazio(vetorImpar, numeroElementos);
            vetorImpar[indice] = numero;
        }
    }


    int tamanhoVetorPar = encontraTamanhoPreenchidoVetor(vetorPar, numeroElementos);
    int tamanhoVetorImpar = encontraTamanhoPreenchidoVetor(vetorImpar, numeroElementos);

    
    cout<< "O vetor par possui "<<tamanhoVetorPar<<" elementos que são: "<<endl;
    for(int i=0; i<tamanhoVetorPar; i++){
        cout<<vetorPar[i]<<" ";
    }

    cout<<endl;

    cout<< "O vetor impar possui "<<tamanhoVetorImpar<<" elementos que são: "<<endl;
    for(int i=0; i<tamanhoVetorImpar; i++){
        cout<<vetorImpar[i]<<" ";
    }

    cout<<endl;
















    system("PAUSE");
    return 0;
}