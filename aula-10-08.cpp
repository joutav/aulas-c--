#include <iostream>
#include <stdio.h>
using namespace std;

main() {

    while(true) {
	
		setlocale(LC_ALL, "portuguese");
	    int num;
	
	    cout<<"Digite um n�mero: \n"; cin>>num;
	    if(num%2 == 0){
	        cout<<"O n�mero digitado � par. \n \n";
	
	    } else {
	        cout<<"O n�mero digiado � impar. \n \n";
	    }
	    
        if(num > 0){
	        cout<<"O n�mero digitado � positivo. \n \n";
	
	    }   else if (num < 0){
	            cout<<"O n�mero digiado � falso. \n \n";
	        } else  {
                cout<<"O n�mero � neutro. \n \n";
            }
    

	}





}
