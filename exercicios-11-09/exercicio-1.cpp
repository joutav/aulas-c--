#include <iostream>
using namespace std;

struct cdMusica {
    string nomeBanda;
    string dataLancamento;
    string dataContratacao;
    float valorCd;
    int numeroMembrosBanda;
    string produtora;
};

int main(){

    setlocale(LC_ALL, "portuguese");

    cdMusica cd1;

    cout<<"Qual nome da banda? "; 
    getline(cin,cd1.nomeBanda);
    fflush(stdin);

    cout<<"Qual data de lançamento (xx/xx/xxxx)? "; 
    getline(cin,cd1.dataLancamento);
    fflush(stdin);
    
    cout<<"Qual data de contratação (xx/xx/xxxx)? "; 
    getline(cin, cd1.dataContratacao);
    fflush(stdin);
    
    cout<<"Qual valor do cd? "; cin>>cd1.valorCd;
    fflush(stdin);


    cout<<"Qual a quantidade de membros? "; cin>>cd1.numeroMembrosBanda;
    fflush(stdin);

   
    cout<<"Qual a produtora? ";
    getline(cin, cd1.produtora);
    fflush(stdin);


    cout<<endl;

    cout<<"Nome da Banda.............: "<<cd1.nomeBanda<<endl;
    cout<<"Data Lançamento...........: "<<cd1.dataLancamento<<endl;
    cout<<"Data contratação..........: "<<cd1.dataContratacao<<endl;
    cout<<"Valor do CD...............: "<<cd1.valorCd<<endl;
    cout<<"Quantidade de membros.....: "<<cd1.numeroMembrosBanda<<endl;
    cout<<"Produtora.................: "<<cd1.produtora<<endl;



    system("PAUSE");

    return 0;










}