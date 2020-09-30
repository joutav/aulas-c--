#include<iostream>
using namespace std;




void encontraMaiorMenor(int *dados, int size, int &max, int &min){

    min = dados[0];
    max = dados[0];

    for(int i = 1; i<size; i++){
        if(dados[i] > max) max = dados[i];
        if(dados[i] < min) min = dados[i];
    }

}



int main(){
    
    setlocale(LC_ALL, "portuguese");

    int dados[10], max, min, size = 10;

    for(int i = 0; i<size; i++ ){
        cout <<"Digite o número "<<i+1<<"/10: "; cin >> dados[i];
    }
    
    encontraMaiorMenor(dados, size, max, min);

    cout<<"O maior valor é "<< max << " e o menor é " << min <<"."<<endl;

    system("PAUSE");



    return 0;


}