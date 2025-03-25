#include <iostream>
using namespace std;

// int main() {
//     int contador;
//     contador = 1;

//     while (contador < 6) {
//         cout << "O contador agora eh: " << contador << endl;
//         contador += 1;
//     }
//     cout << endl;
//     cout << "loop encerrado!";

//     return 0;
// }

int main() {
    int num, soma;
    soma = 0;

    while (soma < 20) {
        cout << "\nA soma atual eh: " << soma << endl;
        cout << "informe um numero: ";
        cin >> num;
        soma += num;
    }

    cout << "\nA soma agora eh: " << soma;

    return 0;
}