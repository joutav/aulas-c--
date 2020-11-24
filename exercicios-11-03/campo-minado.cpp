#include <iostream>
#include <random> 
#include <ctime>
#define LIM 6
using namespace std;


void clear(){
    #if defined _WIN32
        system("cls");
    #elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
        system("clear");
    #elif defined (__APPLE__)
        system("clear");
    #endif
}


void preencher(int matrizJogo[][LIM], int dificuldade){
    int temp = dificuldade + 1;
    for(int i = 0; i < LIM; i++){
        for(int j = 0; j < LIM; j++){
            matrizJogo[i][j] = rand() % temp;
        }
    }
}

void escreveMatriz(char matrizJogo[][LIM]){
    for(int i = 0; i < LIM; i++){
        for(int j = 0; j < LIM; j++){
            cout<<matrizJogo[i][j]<<' ';
        }
        cout<<endl;
    } 
}


void espacoMovimentavel(char matrizJogo[][LIM], int contadorRodadas, int posicao){
    if(contadorRodadas == 0){
        for(int i = 0; i < LIM; i++)
            matrizJogo[contadorRodadas][i] = 49+i;
    } else {

        if(posicao == 1){
            for(int i = 0; i < posicao+1; i++)
                matrizJogo[contadorRodadas][i] = 49+i;
        }
            
        if(posicao == 6) {
            for(int i = posicao - 2; i < posicao; i++)
                matrizJogo[contadorRodadas][i] = 49+i;
        }

        if(posicao > 1 && posicao < 6 ){
            for(int i = posicao-2; i < posicao+1; i++)
                matrizJogo[contadorRodadas][i] = 49+i;  
        }
    }
}   

void preencheEspacoMovimentavel(char matrizJogo[][LIM], int contadorRodadas, int posicao){
    
    for(int i = 0; i < LIM; i++){
        for(int j = 0; j < LIM; j++){
            matrizJogo[i][j] = '0';
        }
    }
    
    espacoMovimentavel(matrizJogo, contadorRodadas, posicao);

    
    matrizJogo[contadorRodadas-1][posicao-1] = 1;

}

void explosao(char matriz[][LIM], int contadorRodadas, int posicao){
    for(int i = 0; i < LIM; i++){
        for(int j = 0; j < LIM; j++){
            matriz[i][j] = 'O';
        }
    }
    matriz[contadorRodadas-1][posicao-1] = 'X';
    clear();
    escreveMatriz(matriz);
    cout <<"Você perdeu!!!!!!"<<endl;
    system("PAUSE");
    
}

bool verificaBomba(int matrizBombas[][LIM], int contadorRodadas, int posicao){
    return (matrizBombas[contadorRodadas-1][posicao-1] == 1);
}


void joga(char matriz[][LIM], int contadorRodadas, int posicao){
    clear();
    preencheEspacoMovimentavel(matriz, contadorRodadas, posicao);
    escreveMatriz(matriz);

}

void matrizDica(int matriz[][LIM], char matrizResposta[][LIM]){
    for(int i = 0; i < LIM; i++){
        for(int j = 0; j < LIM; j++){
            if(matriz[i][j] == 1){
                matrizResposta[i][j] = 'X';
            } else {
                matrizResposta[i][j] = 'O';
            }
        }   
    }
}


int main(){
    setlocale(LC_ALL, "portuguese");

    srand(time(NULL));

    int matrizBombas[LIM][LIM];
    char matrizMovimentar[LIM][LIM], matrizResposta[LIM][LIM], exibirMinas;
    int posicao, contadorRodadas = 0, dificuldade;

    cout << "Selecione a dificuldade (1 - Impossível , 2 - Médio, 3 - Fácil) :"; cin>>dificuldade;
    cout << "Deseja exibir a localização das minas (s - Sim, n - Não)? "; cin>>exibirMinas;


    preencher(matrizBombas, dificuldade);

    if(exibirMinas == 's'){
        clear();
        cout << "Revelação das bombas ('X' equivale a bomba)"<<endl;
        matrizDica(matrizBombas, matrizResposta);
        escreveMatriz(matrizResposta);
        system("PAUSE");
    } 
    
    

    
    
    joga(matrizMovimentar, contadorRodadas, 0);

    
    
    cout << "Digite o espaço que deseja inicar: "; cin >> posicao;
    contadorRodadas++;
    
    if(verificaBomba(matrizBombas, contadorRodadas, posicao)){
        explosao(matrizMovimentar, contadorRodadas, posicao);
        return 0;
    }
    
    
    
    joga(matrizMovimentar, contadorRodadas, posicao);
    

    while (contadorRodadas < 6){
    cout << "Digite o próximo espaço: "; cin >> posicao;
    contadorRodadas++;
    
    if(verificaBomba(matrizBombas, contadorRodadas, posicao)){
        explosao(matrizMovimentar, contadorRodadas, posicao);
        return 0;
    }
    
    joga(matrizMovimentar, contadorRodadas, posicao);

    

    }

    cout <<"\nParabéns você venceu!!!!!!!!!\n";



    system("PAUSE");
    return 0;
}