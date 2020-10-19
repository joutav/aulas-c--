#include <iostream>
using namespace std;
#define LIML 20
#define LIMC 50


bool validaMatriz(int linhas, int colunas){
    if(linhas > LIML || colunas > LIMC){
        return false;
    } else return true;
}

int somaLinha(int a[][LIMC], int linha, int linhas, int colunas){
    int soma = 0;
    
    for(int j = 0; j < colunas; j++) {
        soma += a[linha][j];
    }
    
    return soma;
}

int somaColuna(int a[][LIMC], int coluna, int linhas, int colunas){
    int soma = 0;
    
    for(int i = 0; i < linhas; i++) {
        soma += a[i][coluna];
    }
    
    return soma;
}

int somaImpares(int a[][LIMC], int linhas, int colunas){
    int soma = 0;
    for(int i = 0; i < linhas; i++)
        for(int j = 0; j < colunas; j++) 
            if(a[i][j] % 2 != 0) 
                soma += a[i][j];
    return soma;
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


    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++) {
            cout << "Insira o elemento [" << i+1 << ", " << j+1<<"] : "; cin>>matrizA[i][j];
        }
        cout <<endl;
    }

        
        
    cout << "Matriz A: "<<endl;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++) {
            cout<<matrizA[i][j];
        }
        cout<<endl;
    }
    
    cout<<endl;

    cout<<"A soma dos números ímpares presentes na matriz é "<< somaImpares(matrizA, linhas, colunas)<<endl;

    cout<<endl;


    for(int i = 0; i < linhas; i++){
        cout<<"Linha "<<i+1<<": "<<somaLinha(matrizA, i, linhas, colunas)<<endl;
    }

    cout<<endl;

    for(int j = 0; j < colunas; j++){
        cout<<"Coluna "<<j+1<<": "<<somaColuna(matrizA, j, linhas, colunas)<<endl;
    }

    cout<<endl;

    
    
    
    
    system("PAUSE");
    return 0;
}