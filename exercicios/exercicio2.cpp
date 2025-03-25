#include <iostream>

using namespace std;

void trocaValores(int *num1, int *num2){
    int aux = *num1;

    *num1 = *num2;
    *num2 = aux;
}

int main(){
    int v1, v2;

    cout << "\nInforme o valor da variavel 1: " << endl;
    cin >> v1;
    cout << "\nInforme o valor da variavel 2: " << endl;
    cin >> v2;

    cout << "\nValores antes da troca:" << endl;
    cout << "Variavel 1: " << v1 << ", Variavel 2: " << v2 << endl;


    trocaValores(&v1, &v2);

    cout << "\nValores depois da troca:" << endl;
    cout << "O valor contido na primeira variavel agora eh: " << v1 << endl;
    cout << "O valor contido na segunda variavel agora eh: " << v2 << endl;

}