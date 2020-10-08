#include <iostream>
using namespace std;


bool verificaPrimo(int num){
    int divisores = 0;
    for(int i=1; i<=num; i++){
        if(num % i==0){divisores ++;}
        if(divisores > 2) return false;
    }
    return true;
}

int encontraIndiceVazio (int vetor[], int tamahoVetor){
    int indice;
    
    for(int i=0; i < tamahoVetor; i++){
        if(vetor[i] == -1){
            indice = i;
            break;
        }

    }
 
    return indice;
}


void adicionaValor(int vetor[], int valor){
    vetor[encontraIndiceVazio(vetor, 15)] = valor;
}


void extaiPrimos(int vetorA[], int primos[]){
    for (int i = 0; i < 15; i++){
        if(verificaPrimo(vetorA[i])){
            adicionaValor(primos, vetorA[i]);
        }
    }
}


int main() {

    setlocale(LC_ALL, "portuguese");

    int k[15], primos[15], valor;

    for(int i = 0; i < 15; i++){
        primos[i] = -1;
    }

    for(int i = 0; i < 15; i++){
        cout << "Insira o valor "<<i+1<<"/15: "; cin >> valor;
        k[i] = valor;
    }

    extaiPrimos(k, primos);
    int tamanhoVetorPrimos = encontraIndiceVazio(primos, 15);

    cout<<"Vetor compondo apenas os numeros primos dos valores informados é: "<<endl;
    for(int i = 0; i < tamanhoVetorPrimos; i++){
        cout<<primos[i]<<" ";
    }

    cout<<endl;

    system("PAUSE");
    return 0;
}