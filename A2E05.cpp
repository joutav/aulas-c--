#include<iostream>
using namespace std;

main(){
    
    
    setlocale(LC_ALL, "portuguese");
    float area;
    float latasTintaNecessarias = area * 5;
    float litrosTintaNecessario = area * 0.2;
    
    cout<<"Quantos m� tem a parede que ir� pintar?"<<endl;
    cin>>area;

    cout<<"Voc� ir� precisar de " << latasTintaNecessarias << " latas de tinta ou de " << litrosTintaNecessario << " litros de tinta";


}
