#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float nota1, nota2, media;

    cout << "Informe a primeira nota: \n";
    cin >> nota1;
    cout << "Informe a segunda nota: \n";
    cin >> nota2;

    media = (nota1+nota2)/2;
    cout << "\nA media eh: " << fixed << setprecision(2) << media << endl;

    float freq;
    cout << "\nInforme a frequencia do aluno: \n";
    cin >> freq;

    // if (media > 50 && freq > 75){
    //     cout << "Aprovado\n";
    // } else {
    //     cout << "Reprovado\n";
    // }

    if (media < 50 || freq < 75){
        cout << "Reprovado";
    } else {
        cout << "Aprovado";
    }

    return 0;
}