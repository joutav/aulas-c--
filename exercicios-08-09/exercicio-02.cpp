#include<iostream>
using namespace std;

string verificaPar(int a){
    if(a%2 == 0) {
        return "É par \n";
    } else {
        return "É impar \n";
    }
}

main() {

    setlocale(LC_ALL, "Portuguese");
    int a;
    cout<<"Insira um inteiro para saber é par ou impar: "; cin>>a;
    cout<<verificaPar(a);

    system("PAUSE");

}