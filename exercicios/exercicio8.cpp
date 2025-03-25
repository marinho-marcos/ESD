#include <iostream>

using namespace std;

int frequenciaVetor(int *vetor, int tamanho, int num){
    int encontrado = 0;

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == num){
            encontrado++;
        }
    }

    return encontrado;
}

int main(){
    int num, vetor[10];

    cout << "\nPreencha o vetor de 10 numeros inteiros!" << endl;
    for(int i = 0; i < 10; i++){
        cout << "\nNumero da posicao " << i+1 << "->" << endl;
        cin >> vetor[i];
    }

    cout << "\nInforme um numero para obter a sua frequencia no vetor: " << endl;
    cin >> num;

    cout << "\nFrequencia do numero buscado: " << frequenciaVetor(vetor, 10, num);
}