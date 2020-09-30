#include<iostream>
using namespace std;




float calculaProdutoEscalar(float *dadosA,float *dadosB, int size){

    float produtoEscalar = 0;

    for(int i = 0; i<size; i++){
        int produto = dadosA[i] * dadosB[i];
        produtoEscalar += produto;
    }

    return produtoEscalar;
}



int main(){
    
    setlocale(LC_ALL, "portuguese");

    float dadosA[10], dadosB[10], produtoEscalar;
    int size = 10;

    for(int i = 0; i<size; i++ ){
        cout <<"Digite o número "<<i+1<<"/10 do primeiro grupo: "; cin >> dadosA[i];
        cout <<"Digite o número "<<i+1<<"/10 do segundo grupo: "; cin >> dadosB[i];

    }
    
    produtoEscalar = calculaProdutoEscalar(dadosA, dadosB, size);

    cout<<"O produto escalar entre os dois grupos é "<<produtoEscalar<<"."<<endl;

    system("PAUSE");



    return 0;


}