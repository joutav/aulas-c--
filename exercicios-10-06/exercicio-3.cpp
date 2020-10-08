#include <iostream>
using namespace std;



int main() {

    setlocale(LC_ALL, "portuguese");

    int vetorOriginal[20], vetorInvertido[20], valor;

    for(int i = 0; i < 20; i++){
        cout << "Digite o valor ("<<i+1<<"/20): "; cin>>valor;
        vetorOriginal[i] = valor;
    }
   
    cout <<"Vetor Original: ";
    for(int i = 0; i < 20; i++){
        cout << vetorOriginal[i]<<" ";        
    }

    for(int i = 0, j = 19; i<20 & j >= 0; i++, j--){
        vetorInvertido[j] = vetorOriginal[i];
    }

    cout <<"\nVetor Invertido: ";
    for(int i = 0; i < 20; i++){
        cout << vetorInvertido[i]<<" ";        
    }

    cout <<endl;

    system("PAUSE");
    return 0;
}