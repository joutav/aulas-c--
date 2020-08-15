#include<iostream>
using namespace std;

main(){
    
    
    setlocale(LC_ALL, "portuguese");
    double area;
    double altura;
    double base;

    cout<<"Insira o comprimento da base do triangulo"<<endl;
    cin>>base;

    cout<<"Insira a altura do triangulo"<<endl;
    cin>>altura;

    area = base*altura/2;

    cout<<"A area do triangulo é " << area;



}
