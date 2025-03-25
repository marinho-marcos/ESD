#include <iostream>
using namespace std;

void saudacao(char primeira, char segunda) {
    cout << "Ola, " << primeira << segunda << "!" << endl;
}

int main() {
    char inicial1, inicial2;

    cout << "Informe suas iniciais (sem separacao): " << endl;
    cin >> inicial1 >> inicial2;
    saudacao(inicial1, inicial2);
}