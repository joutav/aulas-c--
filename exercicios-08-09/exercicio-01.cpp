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
    cout<<"Insira dois número"<<endl;
    cout<<"Primeiro número: "; cin>>a;
    cout<<"Segundo número: "; cin>>b;
    cout<<"O maior numero é " << verificaMaior(a, b)<<endl;

    system("PAUSE");

}