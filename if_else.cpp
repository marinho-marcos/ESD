#include <iostream>

using namespace std;

int main() {
    float nota1, nota2, nota3, media;

    cout << "Informe a primeira nota: \n";
    cin >> nota1;
    cout << "Informe a segunda nota: \n";
    cin >> nota2;
    cout << "Informe a terceira nota: \n";
    cin >> nota3;

    media = (nota1+nota2+nota3)/3;
    cout << "\nA media eh: " << media << endl;

    if (media < 25){
        cout << "Nota final: D\n";
    } else if (media < 50){
        cout << "Nota final: C\n";
    } else if (media < 75){
        cout << "Nota final: B\n";
    } else {
        cout << "Nota final: A\n";
    }

    return 0;
}