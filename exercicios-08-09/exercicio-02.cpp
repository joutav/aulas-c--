#include<iostream>
using namespace std;

string verificaPar(int a){
    if(a%2 == 0) {
        return "� par \n";
    } else {
        return "� impar \n";
    }
}

main() {

    setlocale(LC_ALL, "Portuguese");
    int a;
    cout<<"Insira um inteiro para saber � par ou impar: "; cin>>a;
    cout<<verificaPar(a);

    system("PAUSE");

}