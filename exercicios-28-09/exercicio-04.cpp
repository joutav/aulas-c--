#include<iostream>
using namespace std;




int contadorRepeticao(int *dadosA,int size, int elemento){

    int contador = 0;

    for(int i = 0; i<size; i++){
        if(dadosA[i] == elemento) contador++;
    }

    return contador;
}



int main(){
    
    setlocale(LC_ALL, "portuguese");

    int dadosA[10], quantidadeRepeticao, elemento;
    int size = 10;

    cout<<"Informe a quantidade de inteiros que haver� no grupo: "; cin>>size;

    for(int i = 0; i<size; i++ ){
        cout <<"Digite o n�mero "<<i+1<<"/"<<size<<" do primeiro grupo: "; cin >> dadosA[i];

    }

    if(size == 0){
        cout <<"Programa finalizado pois o grupo � vazio"<<endl;
        system("PAUSE");
        return 0;
    }
    
    cout<<"Informe um n�mero para verificar a quantidade de repeti��o: "; cin >> elemento;
    cout<<"O n�mero "<<elemento<<" aparece "<<contadorRepeticao(dadosA, size, elemento)<< " vezes no grupo."<<endl;
    system("PAUSE");



    return 0;


}