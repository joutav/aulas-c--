#include<iostream>
using namespace std;


int main(){

    setlocale(LC_ALL, "portuguese");


    int a[5] = {1,2,3,4,5}, aRotacionado[5], k, i, temp, n = 5, rotacao;

    cout<<"Insira o setindo da rotação: (1)Esquerda (2)Direita."; cin>>rotacao;
    cout<<"Insira a quantidade de casas para rotacionar: "; cin>>k;
    
    //Rotação esquerda.
    if (rotacao == 1){
        for(int j = 0; j<k; j++){
            temp = a[0];
            for(i = 0; i<n-1; i++){
                a[i] = a[i+1];
            }
            a[i] = temp;
        }
    }
    
    //Rotação direita
    if(rotacao == 2){
        for(int j = 0; j<k; j++){
            temp = a[n-1];
            for(i = n-1; i>0; i--){
                a[i] = a[i-1];
            }
            a[i] = temp;
        }
    }
    
    
    
    for(int l = 0; l < n; l++){
        cout<<a[l]<<endl;
    }
    
    
    
    
    
    system("PAUSE");



    return 0;









}