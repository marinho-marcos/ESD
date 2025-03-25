#include <iostream>

using namespace std;

void dobraValor(int *num){
    *num *= 2;
}

int main(){
    int num;

    cout << "\nInforme um numero inteiro para obter o dobro do seu valor: \n";
    cin >> num;

    cout << "\nNumero antes da alteracao: " << num << endl;

    dobraValor(&num);

    cout << "\nNumero apos alteracao: " << num << endl;

    return 0;
}