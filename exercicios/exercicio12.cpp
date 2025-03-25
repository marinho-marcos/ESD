//PROGRAMA QUE VAI SUBSTITUIR VALORES EM UM VETOR
#include <iostream>

using namespace std;

void substituirVetor(int *vetor, int tamanho, int alvo, int num){
    int alterados = 0;

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == alvo){
            vetor[i] = num;
            alterados++;
        }
    }

    if(alterados != 0){
        cout << "\nForam encontradas " << alterados << " ocorrencias do numero alvo e substituidas!" << endl;
    } else {
        cout << "\nNao foram encontradas ocorrencias do numero alvo!" << endl;
    }
}

int main(){
    int alvo, num, vetor[10];

    cout << "\nInforme os numeros do vetor de 10 posicoes!" << endl;
    for(int i = 0; i < 10; i++){
        cout << "\nNumero da posicao " << i+1 << endl;
        cin >> vetor[i];
    }

    cout << "\nInforme o numero alvo para ser procurado dentro do vetor: " << endl;
    cin >> alvo;
    cout << "\nInforme o numero que vai substituir as ocorrencias do numero alvo: " << endl;
    cin >> num;

    cout << "\nVetor antes da substituicao: " << endl;
    cout << "-----------------------------" << endl;
    for(int i = 0; i < 10; i++){
        cout << vetor[i] << " ";
    }

    cout << "\n";

    substituirVetor(vetor, 10, alvo, num);

    cout << "\nVetor depois da substituicao: " << endl;
    cout << "-----------------------------" << endl;
    for(int i = 0; i < 10; i++){
        cout << vetor[i] << " ";
    }

    return 0;
}