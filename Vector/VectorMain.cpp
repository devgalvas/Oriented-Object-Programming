#include "Vector.h"
#include <iostream>

using namespace std;

int main () {

    Vector <float> vector;
    int index;

    cout << "Insira os dados para determinar o vetor: \n";
    cin >> vector;
    vector.Ord();
    cout << vector << endl;

    cout << "Qual posição deseja consultar o respectivo elemento? ";
    cin >> index;

    try {
        float result = vector[index];
        cout << "Conteudo do índice: " << index << " = " << result << endl;
    }

    catch(out_of_range &ex) {
        cout << "\nÍndice inválido!\n";
    }

    return 0;
}