#include <iostream>
#include <stdio.h>
using namespace std;

main() {

    while(true) {
	
		setlocale(LC_ALL, "portuguese");
	    int num;
	
	    cout<<"Digite um número: \n"; cin>>num;
	    if(num%2 == 0){
	        cout<<"O número digitado é par. \n \n";
	
	    } else {
	        cout<<"O número digiado é impar. \n \n";
	    }
	    
        if(num > 0){
	        cout<<"O número digitado é positivo. \n \n";
	
	    }   else if (num < 0){
	            cout<<"O número digiado é falso. \n \n";
	        } else  {
                cout<<"O número é neutro. \n \n";
            }
    

	}





}
