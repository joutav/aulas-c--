#include <iostream>

using namespace std;

bool devePrintarQuadrado(int x){
	if(x<5){
		return true;
	} else {
		return false;
	}
	
}

main(){
for(int i = 0; i < 10; i++){
    cout<<i*i<<endl;
}       

cout<<"-------------------------------------------------"<<endl;
int i = 0;
while(devePrintarQuadrado(i)){
	cout<<i*i*i<<endl;
	i++;

}





}
