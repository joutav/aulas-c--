#include <iostream>
using namespace std;
#define LIML 20
#define LIMC 50



void matrizTransposta(int a[LIML][LIMC], int at[LIML][LIMC], int linhas, int colunas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++) {
            at[j][i] = a[i][j];
        }
    }

}

bool validaMatriz(int linhas, int colunas){
    if(linhas > LIML || colunas > LIMC){
        return false;
    } else return true;
}



int main(){
    setlocale(LC_ALL, "portuguese");

    int linhas, colunas;


    cout<<"Quantas linhas a matriz terá (máximo 20)? "; cin>>linhas;
    cout<<"Quantas colunas a matriz terá (máximo 50)? "; cin>>colunas;

    if(!validaMatriz(linhas, colunas)){
        cout <<"Matriz muito grande"<<endl;
        system("PAUSE");
        return 0;
    }

    
    int matrizA[LIML][LIMC];
    int matrizAT[LIML][LIMC];


    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++) {
            cout << "Insira o elemento [" << i+1 << ", " << j+1<<"] : "; cin>>matrizA[i][j];
        }
        cout <<endl;
    }

    

    cout<<endl;

    matrizTransposta(matrizA, matrizAT, linhas, colunas);
    
    
    
    
    
    
    cout << "Matriz A: "<<endl;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++) {
            cout<<matrizA[i][j];
        }
        cout<<endl;
    }

    cout<<endl;
    
    cout << "Matriz A transposta:"<<endl;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++) {
            cout<<matrizAT[i][j];
        }
        cout<<endl;
    }
    
    
    
    
    system("PAUSE");
    return 0;
}