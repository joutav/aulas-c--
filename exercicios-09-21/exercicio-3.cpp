#include <iostream>
using namespace std;


void MM(int &A, int &B){
    if(A>B){
        int temp = A;
        A = B;
        B = temp;
    } 
}

int main(){

    setlocale(LC_ALL, "portuguese");

    int num1, num2;

    cout << "Informe o primeiro número: "; cin >>num1;
    cout << "Informe o segundo número: "; cin >>num2;
    MM(num1, num2);

    cout << "O menor número é " << num1 << " e o maior é " << num2 << endl;

    system("PAUSE");


    return 0;




}