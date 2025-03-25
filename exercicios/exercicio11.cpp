//PROGRAMA QUE VAI CALCULAR E IMPRIMIR FATORIAL SEM UTILIZAR RECURSIVIDADE
#include <iostream>

using namespace std;

int main(){
    int num;
    long int fatorial = 1;

    cout << "forneca o numero para obter o seu fatorial: " << endl;
    cin >> num;

    for(int i = 1; i <= num; i++){
        fatorial = fatorial * i;
    } 

    cout << "O fatorial de " << num << " eh: " << fatorial << endl;

    return 0;
}