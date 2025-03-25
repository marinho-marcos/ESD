// PROGRAMA SIMPLES DE BOLETIN ESCOLAR UTILIZANDO ARRAYS
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int indice, total;
    float media;

    int qntdAlunos;
    cout << "informea qntd de alunos: \n";
    cin >> qntdAlunos;
    int boletin[qntdAlunos];

    // for (indice = 0; indice < 4; indice++){
    //     cout << "\nEntre com a nota do aluno " << indice+1 << ": ";
    //     cin >> notas[indice];
    // }

    // cout << "\nNotas: " << endl;
    // cout << "--------\n" << endl;

    // total = 0;
    // for (indice = 0; indice < 4; indice++){
    //     cout << "Nota do aluno " << indice+1 << " = " << notas[indice] << endl;
    //     total += notas[indice];
    // }

    for (indice = 0; indice < qntdAlunos; indice++){
        cout << "\nEntre com a nota do aluno " << indice+1 << ": ";
        cin >> boletin[indice];
    }

    cout << "\nNotas: " << endl;
    cout << "--------\n" << endl;

    total = 0;
    for (indice = 0; indice < qntdAlunos; indice++){
        cout << "Nota do aluno " << indice+1 << " = " << boletin[indice] << endl;
        total += boletin[indice];
    }
    
    media = (float)total/qntdAlunos;
    cout << "\nA media das notas dos alunos eh: " << fixed << setprecision(2) << media;

    return 0;
}
