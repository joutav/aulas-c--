#include<iostream>
using namespace std;

int verificaMaior(int a, int b){
    if(a>b) {
        return a;
    } else {
        return b;
    }
}

main() {

    setlocale(LC_ALL, "Portuguese");
    int a,b;
    cout<<"Insira dois n�mero"<<endl;
    cout<<"Primeiro n�mero: "; cin>>a;
    cout<<"Segundo n�mero: "; cin>>b;
    cout<<"O maior numero � " << verificaMaior(a, b)<<endl;

    system("PAUSE");

}