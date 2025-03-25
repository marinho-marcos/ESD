#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int temp;
    cout << "Informe a temperatura: \n";
    cin >> temp;

    if (temp < 10) {
        cout << "Temperatura muito fria!\n";
    } else if (temp < 20) {
        cout << "Temperatura fria!\n";
    } else if (temp < 30) {
        cout << "Temperatura agradavel!\n";
    } else {
        cout << "Temperatura muito quente!\n";
    }

    return 0;
}