#include <iostream>
using namespace std;

int quantidadePares(int vetor[], int size){
    int contadorPar = 0;
    for(int i = 0; i <size; i++){
        if(vetor[i] % 2 == 0) contadorPar++;

    }
    return contadorPar;
}

int main() {

    setlocale(LC_ALL, "portuguese");

    int vetor[20], contadorPar, valor;

    for(int i = 0; i < 20; i++){
        cout << "Digite o valor ("<<i+1<<"/20): "; cin>>valor;
        vetor[i] = valor;
    }

    contadorPar = quantidadePares(vetor, 20);

    cout << "A quantidade de números pares no vetor é "<<contadorPar<<endl;

    system("PAUSE");
    return 0;
}