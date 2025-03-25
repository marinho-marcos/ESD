#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
using std::string;
using std::getline;

// void contarAteUm(int n){
//     if(n == 1){
//         cout << 1;
//     } else {
//         cout << n << endl;
//         contarAteUm(n-1);
//     }
// }

// int main(){
//     int num;
//     cout << "Informe um valor: \n";
//     cin >> num;

//     contarAteUm(num);

//     return 0;
// }


// int fatorial(int n) {
//     if (n <= 1) {  // Caso base
//         return 1;
//     } else {       // Passo recursivo
//         return n * fatorial(n - 1);
//     }
// }

// int main() {
//     int num = 5;
//     printf("Fatorial de %d eh %d\n", num, fatorial(num));
//     return 0;
// }


int fibonacci(int n){
    if(n <= 1){                 //CASO ABSE
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);     //PASSO RECURSIVO
    }
}

int main(){
    int x;
    cout << "insira um numero para obter sua posicao sa sequencia de fibonacci:\n";
    cin >> x;
    int res = fibonacci(x-1);
    cout << "\na posicao do numero informado na seq. de fibonacci eh: " << res << endl;

    return 0;
}