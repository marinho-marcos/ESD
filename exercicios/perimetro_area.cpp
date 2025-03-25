#include <iostream>
#include <string>  
#include <iomanip>   //CONTROLE DE FLUXO
#include <cmath> 
using namespace std;

#define PI 3.14159

int main(){
    int raio;
    float perim, area;

    cout << "Informe o valor do raio: " << endl;
    cin >> raio;

    perim = 2*PI*raio;
    area = PI*pow(raio,2);

    cout << "O perimetro da circunferencia de raio " << raio << " eh " << fixed << setprecision(2) << perim << endl;
    cout << "E a area eh " << fixed << setprecision(2) << area << endl;

    return 0;
}