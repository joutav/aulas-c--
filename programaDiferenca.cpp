#include <iostream>
using namespace std;
main() {

setlocale(LC_ALL, "portuguese");
float num1, num2;
cout<<"Escreva o primeiro numero ";
cin>>num1;
cout<<"Escreva o segundo numero ";
cin>>num2;
if (num1>num2)
cout<<"A diferença e = "<<(num1-num2);
else
if(num1<num2)
cout<<"A diferença e = "<<(num2-num1);
}