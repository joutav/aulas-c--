#include <iostream>
using namespace std;

main () {
    setlocale(LC_ALL, "portuguese");

    cout<<"Digite o número(1/15): ";
    float num;
    cin>>num;
    cout<<endl;
    float max = num;
    float min = num;
        

    for (int i = 0; i < 14; i++){

        cout<<"Digite número(" <<i+2<< "/15): ";

        cin>>num;
        cout<<endl;

        if(num>max) max = num;
        if(num<min) min = num;
        
    }

    cout<<"O maior número é " <<max<<endl;
    cout<<"O menor número é " <<min<<endl;
   

    system("PAUSE");























}
