#include <iostream>
#include <cmath>
using namespace std;

int maiorDe3(int x, int y, int z) {
    int maior;

    if(x>y && x>z) {
        maior = x;
    }
    else if(y>x && y>z) {
        maior = y;
    }
    else {
        maior = z;
    }

    return maior;

}

int main() {
    int a, b, c, maior1, maior2;
    cout << "Entre com os 3 valores do primeiro conjunto: " << endl;
    cin >> a >> b >> c;

    maior1 = maiorDe3(a,b,c);

    cout << "O maior valor informado no primeiro conjunto eh: " << maior1 << endl;

    cout << endl;

    cout << "Entre com os 3 valores do segundo conjunto: " << endl;
    cin >> a >> b >> c;
    
    maior2 = maiorDe3(a,b,c);

    cout << "O maior valor informado no segundo conjunto eh: " << maior2 << endl;

    cout << endl << maior1 << "+" << maior2 << " = " << maior1+maior2;

    return 0;
}