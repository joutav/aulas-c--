#include <iostream>
using namespace std;

main(){

    setlocale(LC_ALL, "portuguese");

    int contadorNumeros = 1;
    int num;
    int maxNum;
    int minNum;
    int somaNum = 0;

    while(contadorNumeros<=10){

        cout<<"Insira o numero("<<contadorNumeros<<"/10)"; cin>>num;
        
        
        if(contadorNumeros == 1){
            maxNum = num;
            minNum = num;
        } 
        
        
        somaNum+=num;
        
        if(num>maxNum) maxNum = num;
        if(num<minNum) minNum = num;
        
        contadorNumeros++;

    }

    cout<<"O maior valor é "<<maxNum<<endl;
    cout<<"O menor valor é "<<minNum<<endl;
    cout<<"A média dos números lidos e"<<somaNum/contadorNumeros<<endl;    

    system("PAUSE");
}
