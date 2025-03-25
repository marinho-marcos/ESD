#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void saudacao(string nome) {
    cout << "Ola, " << nome << "!" << endl;
}

int idadeEmMeses(int idade) {
    return idade*12;
}

int main() {
    string nome;
    int idade;

    cout << "Informe seu nome: " << endl;
    getline(cin, nome);

    cout << "Informe sua idade: " << endl;
    cin >> idade;
    
    saudacao(nome);
    cout << "A sua idade em meses eh: " << idadeEmMeses(idade) << endl;

    return 0;
}