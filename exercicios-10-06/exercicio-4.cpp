#include <iostream>
using namespace std;

int corrigeProva(char gabarito[], char resposta[]){
    int acertos = 0;
    for(int i = 0; i < 10; i++){
        if(gabarito[i] == resposta[i]) acertos++;
    }
    return acertos;
}

bool verificaAprovacao(int acertos){
    if(acertos >= 6) return true;
    return false;
}

int main() {

    setlocale(LC_ALL, "portuguese");

    char gabarito[10], resposta[10], valor;
    int acertos;
    string aprovacao;

    cout << "Insira o gabarito da prova (letras minúsculas)"<< endl;
    for(int i = 0; i < 10; i++) {
        cout << "   Gabarito da pergunta "<<i+1<<" de 10: "; cin>> valor;
        gabarito[i] = valor;
    }

    cout << "Insira as respotas do aluno de A à E (letras minúsculas)" << endl;
    for(int i = 0; i < 10; i++) {
        cout << "   Resposta da pergunta "<<i+1<<" de 10: "; cin>> valor;
        resposta[i] = valor;
    }

    acertos = corrigeProva(gabarito, resposta);
    if(verificaAprovacao(acertos)){
        aprovacao = "APROVADO";
    } else aprovacao = "REPROVADO";


    cout << "O aluno acertou "<< acertos<< " questões e foi " << aprovacao<< endl;

    system("PAUSE");
    return 0;
}