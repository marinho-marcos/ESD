// EXIBIR O DOBRO DO VALOR UTILIZANDO PONTEIROS - COM E SEM FUNÇÃO EXTERNA
#include <iostream>

using namespace std;

// int main(){
//     int num, original;
//     int * ptr;
//     ptr = &num;

//     cout << "Informe um numero inteiro: \n";
//     cin >> *ptr;

//     original = *ptr;
//     *ptr = *ptr * 2;

//     cout << "\nvalor original: " << original << endl;
//     cout << "\nvalor alterado: " << *ptr << endl;

//     return 0;
// }

//UTILIZANDO FUNCAO EXTERNA PARA O MESMO PROGRAMA:

int dobroValor(int *num){
    return *num = *num * 2;
}

int main(){
    int num, original;
    int *ptr;
    ptr = &num;

    cout << "\nInforme um valor inteiro: " << endl;
    cin >> *ptr;
    original = *ptr;

    cout << "\nValor original: " << original << endl;
    cout << "Valor alterado: " << dobroValor(&num) << endl;

    return 0;
}