#include<iostream>
using namespace std;

float exponecial(float a, int b){
    return pow(a, b);
}

main() {

    setlocale(LC_ALL, "Portuguese");
    float a;
    int b;
    cout<<"Insira a base da potencia "; cin>>a;
    cout<<"Insira o expoente da potencia "; cin>>b;

    cout<<"O resultado da operaçao é "<<exponecial(a, b)<<endl;


    system("PAUSE");	

}
