#include <iostream>

using namespace std;

int buscaBinaria(int * array, int tamanho, int num){
    int inicio = 0;
    int final = tamanho - 1;

    while(inicio <= final){
        int meio = (inicio + final)/2;

        if(array[meio] == num){
            return meio + 1;
        }
        if(array[meio] < num){
            inicio = meio + 1;
        }
        if(array[meio] > num){
            final = meio - 1;
        }
    }
    return 0;
}

int main(){
    int arr[] = {2, 5, 6, 9, 13, 18, 21, 25};
    int tam = sizeof(arr)/sizeof(arr[0]);

    int num;
    cout << "\nInforme o numero que sera procurado dentro do array: " << endl;
    cin >> num;

    int res = buscaBinaria(arr, tam, num);

    if(res){
        cout << "\nO valor buscado foi encontrado no array na posicao " << res << endl;
    } else{
        cout << "\nO valor informado nao esta presente no array" << endl;
    }
}