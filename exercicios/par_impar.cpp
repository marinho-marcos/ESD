#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Informe um numero para verificar se eh par ou ímpar: " << endl;
    cin >> num;

    if (num % 2 == 0)
        cout << "O numero informado eh par!" << endl;
    else
        cout << "O numero informado eh impar!";

    return 0;
}