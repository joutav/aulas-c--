#include <iostream>
using namespace std;

main() {
    setlocale(LC_ALL, "portuguese");

    int num;
    cout<<"Insira um número para realizar a tabuada: "; cin>>num;
    cout<<"Tabuada do "<<num<<endl;

    for (int i = 0; i <=10; i++)  {

        cout<<num<<"x"<<i<<" = "<<num*i<<endl;


    }

    system("PAUSE");









}