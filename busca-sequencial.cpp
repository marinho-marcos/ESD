#include <iostream>

using namespace std;

int buscaSequencial(int * array, int tamanho, int num){
    for(int i = 0; i < tamanho; i++){
        if(array[i] == num){
            return i+1;
        }
    }
    return 0;
}

int main(){
    int arr[] = {6, 13, 1, 84, 69, 3, 44, 49, 9};
    int tam = sizeof(arr)/sizeof(arr[0]);

    int num;
    cout << "\nInforme o numero que sera procurado dentro do array: " << endl;
    cin >> num;

    int res = buscaSequencial(arr, tam, num);

    if(res){
        cout << "\nO valor buscado foi encontrado no array na posicao " << res << endl;
    } else{
        cout << "\nO valor informado nao esta presente no array" << endl;
    }
}