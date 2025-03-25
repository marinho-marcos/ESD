#include <iostream>
using namespace std;

// int main() {
//     int aux;
//     for(aux=1; aux<=10; aux++) {
//         cout << aux << endl;
//     }

//     return 0;
// }

int main() {
    int i, total;
    
    total = 0;
    for(i=1; i<=30; i++) {
        if((i%3) == 0) {
            cout << i << endl;
            total += i;
        }

    }
    cout << endl << "A soma de todos os multiplos de 3 encontrados eh: " << total;

    return 0;
}