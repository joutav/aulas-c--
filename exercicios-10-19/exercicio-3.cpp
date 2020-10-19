#include <iostream>
using namespace std;
#define LIML 20
#define LIMC 50


bool validaMatriz(int linhas, int colunas){
    if(linhas > LIML || colunas > LIMC){
        return false;
    } else return true;
}

int maiorElementoLinha(int a[][LIMC], int linha, int linhas, int colunas){
    int elemento = 0;
    
    for(int j = 0; j < colunas; j++) {
        if(a[linha][j] > elemento)
            elemento = a[linha][j];
    }
    
    return elemento;
}

int menorElementoColuna(int a[][LIMC], int coluna, int linhas, int colunas){
    int elemento = a[0][coluna];
    
    for(int i = 0; i < linhas; i++) {
        if(a[i][coluna] < elemento)
            elemento = a[i][coluna];
    }
    
    return elemento;
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

    int maioresElementosLinhas[linhas];
    int maioresElementosColunas[linhas];
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

    cout<<"Maiores elementos de cada linha são ";
    for(int i = 0; i < linhas; i++){
        maioresElementosLinhas[i] = maiorElementoLinha(matrizA, i, linhas, colunas);
        cout<<maioresElementosLinhas[i]<<" ";
    }

    cout<<endl;

    cout<<"Menores elementos de cada coluna são ";
    for(int j = 0; j < colunas; j++){
        maioresElementosColunas[j] = menorElementoColuna(matrizA, j, linhas, colunas);
         cout<<maioresElementosColunas[j]<<" ";
    }

    cout<<endl;

    
    
    
    
    system("PAUSE");
    return 0;
}