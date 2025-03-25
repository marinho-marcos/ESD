#include <iostream>

using namespace std;

void maiorMediaVetor(int *vetor, int tamanho, int *maior, float *media){
    *maior = vetor[0];
    int soma = 0;
    
    for(int i = 1; i < tamanho; i++){
        if(vetor[i] > *maior){
            *maior = vetor[i];
        }
    }

    for(int i = 0; i < tamanho; i++){
        soma += vetor[i];
    }

    *media = float(soma)/tamanho;
}

int main(){
    int vetor[6];
    int maior;
    float media;

    for(int i = 0; i < 6; i++){
        cout << "\nInforme o numero da posicao " << i+1 << ":" << endl;
        cin >> vetor[i];
    }

    maiorMediaVetor(vetor, 6, &maior, &media);

    cout << "\nMaior valor do vetor: " << maior << endl;
    cout << "Media do vetor: " << media << endl;

    return 0;
}