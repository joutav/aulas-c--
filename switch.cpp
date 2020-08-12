#include <iostream>
using namespace std;
main()
{
float num1, num2;
char op;
setlocale(LC_ALL, "portuguese");
cout<<"\nDigite uma expressão no formato: num op num:"<<endl;
cout<<"Informa o valor 1: ";cin>> num1;
cout<<"Informa a operação : ";cin>> op;
cout<<"Informa o valor 2: ";cin>> num2;
switch( op ) {
case '+':
cout<<" num1" << op << "num2 = "<<num1+num2;break;
case '-':
cout<<" num1" << op << "num2 = "<<num1-num2;break;
case '*':
cout<<" num1" << op << "num2 = "<<num1*num2;break;
case '/':
cout<<" num1" << op << "num2 = "<<num1/num2;break;
default:
cout<<"\nOperador desconhecido";
} }
