#include<iostream>
using namespace std;

main(){
    
    
    setlocale(LC_ALL, "portuguese");
    float area;
    float latasTintaNecessarias = area * 5;
    float litrosTintaNecessario = area * 0.2;
    
    cout<<"Quantos m² tem a parede que irá pintar?"<<endl;
    cin>>area;

    cout<<"Você irá precisar de " << latasTintaNecessarias << " latas de tinta ou de " << litrosTintaNecessario << " litros de tinta";


}
