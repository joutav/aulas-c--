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

    cout<<"Informe a quantidade de inteiros que haverá no grupo: "; cin>>size;

    for(int i = 0; i<size; i++ ){
        cout <<"Digite o número "<<i+1<<"/"<<size<<" do primeiro grupo: "; cin >> dadosA[i];

    }

    if(size == 0){
        cout <<"Programa finalizado pois o grupo é vazio"<<endl;
        system("PAUSE");
        return 0;
    }
    
    cout<<"Informe um número para verificar a quantidade de repetição: "; cin >> elemento;
    cout<<"O número "<<elemento<<" aparece "<<contadorRepeticao(dadosA, size, elemento)<< " vezes no grupo."<<endl;
    system("PAUSE");



    return 0;


}