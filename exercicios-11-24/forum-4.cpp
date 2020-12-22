#include <iostream>
using namespace std;

struct funcionario {
    string nome;
    string sobrenome;
    string dataNascimento;
    string RG;
    string dataAdmissao;
    float salario;

};

void clear(){
    #if defined _WIN32
        system("cls");
    #elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
        system("clear");
    #elif defined (__APPLE__)
        system("clear");
    #endif
}




int buscarPorNome(struct funcionario pao[], string nome, int tamanho){
    int i = 0;
    while(pao[i].nome != nome && i <tamanho) i++;
    if(i==tamanho) return -1;
    return i;
}



int buscarPorSalario(struct funcionario pao[], int salario, int tamanho){
    int i = 0;
    while(pao[i].salario != salario && i<tamanho) i++;
    if(i==tamanho) return -1;
    return i;
}

int buscarMaiorSalario(struct funcionario pao[], int tamanho){
    float maiorSalario = pao[0].salario;
    int maiorI;
    
    for(int i = 0; i < tamanho; i++){
        if(pao[i].salario > maiorSalario) {
            maiorSalario = pao[i].salario;
            maiorI = i;
        }
    }

    return maiorI;

}


bool validaIndice(int alvo, int tamanho){
    if(alvo >= tamanho || alvo < 0){
        return false;
    } else return true;
}

void dadosColaborador(struct funcionario pao[], int alvo, int tamanho){
    if(validaIndice(alvo, tamanho)){
        cout<<"###Dados colaborador "<<alvo+1<<"###"<<endl;
        cout<<"Nome: "<<pao[alvo].nome<<endl;
        cout<<"Sobrenome: "<<pao[alvo].sobrenome<<endl;
        cout<<"Data de nascimento(dd/mm/aaaa): "<<pao[alvo].dataNascimento<<endl;
        cout<<"RG: "<<pao[alvo].RG<<endl;
        cout<<"Data de admissão(dd/mm/aaaa): "<<pao[alvo].dataAdmissao<<endl;
        cout<<"Salário: "<<pao[alvo].salario<<endl<<endl;
    } else {
        cout<<"Colaborador não encontrado!!"<<endl;
    }


}




int main(){

    setlocale(LC_ALL, "portuguese");

    int numColaboradores, opcao, indice;
    string nome;
    float salario;

    cout<<"Qual número total de colaboradores? "; cin>>numColaboradores;
    funcionario colaboradores[numColaboradores];
    clear();

    for(int i = 0; i < numColaboradores; i++){
        cout<<"###Preenchimento colaborador "<<i+1<<"###"<<endl;
        cout<<"Nome: "; cin>>colaboradores[i].nome;
        cout<<"Sobrenome: "; cin>>colaboradores[i].sobrenome;
        cout<<"Data de nascimento(dd/mm/aaaa): "; cin>>colaboradores[i].dataNascimento;
        cout<<"RG: "; cin>>colaboradores[i].RG;
        cout<<"Data de admissão(dd/mm/aaaa): "; cin>>colaboradores[i].dataAdmissao;
        cout<<"Salário: "; cin>>colaboradores[i].salario;
        clear();
    }

    cout<<"Preenchimento realizado com sucesso.\n"<<endl;
    system("PAUSE");
    clear();

    
    do{
        cout<<"Busca por nome(1), por salário(2), maior salário(3), limpar tela(4), finalizar(0): "; cin>>opcao;
        
        switch(opcao){
            case(1):
                cout<<"Qual nome deseja pesquisar? ";cin>>nome;
                indice = buscarPorNome(colaboradores, nome, numColaboradores);
                dadosColaborador(colaboradores, indice, numColaboradores);
                break;
            
            
            case(2):
                cout<<"Qual salario deseja pesquisar? ";cin>>salario;
                indice = buscarPorSalario(colaboradores, salario, numColaboradores);
                dadosColaborador(colaboradores, indice, numColaboradores);
                break;
            
            case(3):
                cout<<"Colaborador com maior salário:"<<endl;
                dadosColaborador(colaboradores, buscarMaiorSalario(colaboradores, numColaboradores), numColaboradores);
                break;
            case(4):
                clear();
                break;
            case(0):
                break;
            default:
                cout<<"Opção selecionada inválida!!"<<endl;
                break;
        }
    } while(opcao != 0);

    
    cout<<"Fim da execução!!"<<endl;


    system("PAUSE");

    return 0;
}