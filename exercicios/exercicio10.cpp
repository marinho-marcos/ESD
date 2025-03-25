#include <iostream>

using namespace std;

int main(){
    int vetor1[4] = {1,2,3,4}, vetor2[4] = {5,6,7,8};
    int soma = 0;

    for(int i = 0; i < 4; i++){
        cout << vetor1[i] << "*" << vetor2[i] << " = " << vetor1[i] * vetor2[i] << endl;
        soma += (vetor1[i] * vetor2[i]);    
    }    

    cout << "O produto escalar dos vetores eh: " << soma << endl;

    return 0;
}