#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int soma;
    int mult;
    float media;
    int num1, num2, num3;

    cout << "Informe 3 numeros inteiros para obter a soma, produto e media: " << endl;
    cin >> num1 >> num2 >> num3;
    
    soma = num1+num2+num3;
    mult = num1*num2*num3;
    media = (num1+num2+num3)/3;
    cout << "A soma dos numeros informados eh: " << soma << endl;
    cout << "O produto dos numeros informados eh: " << mult << endl;
    cout << "A media dos numeros informados eh: " << fixed << setprecision(1) << media << endl;

    cout << endl;
    
    return 0;
}