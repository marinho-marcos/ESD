#include <iostream>

using namespace std;

void bubbleSort(int * array, int tamanho){
    for(int i = 0; i < tamanho - 1; i++){       //FOR EXTERNO P CONTROLAR A QNTD DE PASSADAS NO VETOR. Em cada passada, o maior elemento restante "sobe" para sua posição correta.
        for(int j = 0; j < tamanho - i - 1; j++){   //FOR INTERNO PARA REALIZAR A TROCA SE NECESSARIO
            if(array[j] > array[j+1]){
                int temp = array[j];            //VATIAVEL AUXILIAR PARA GUARADAR O VALOR TEMPORARIAMENTE
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void imprimirArray(int * array, int tamanho){
    for(int i = 0; i < tamanho; i++){
        cout << array[i] << " ";
    }
}

int main(){
    int array[] = {5, 3, 7, 2, 9};
    int tam = sizeof(array)/sizeof(array[0]);

    cout << "\nArray original:" << endl;
    imprimirArray(array, tam);

    bubbleSort(array, tam);

    cout << "\nArray apos ordenacao:" << endl;
    imprimirArray(array, tam);

    return 0;
}