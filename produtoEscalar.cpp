#include <iostream>

using namespace std;

int main() {
    int arrayA[6];
    int arrayB[6];
    int resultado = 0, i;

    cout << "Digite o primeiro elemento do arranjo a: ";
    cin >> arrayA[0]; 
    cout << "Digite o segundo elemento do arranjo a: ";
    cin >> arrayA[1];
    cout << "Digite o terceiro elemento do arranjo a: ";
    cin >> arrayA[2];
    cout << "Digite o quarto elemento do arranjo a: ";
    cin >> arrayA[3];
    cout << "Digite o quinto elemento do arranjo a: ";
    cin >> arrayA[4];
    cout << "Digite o primeiro elemento do arranjo b: ";
    cin >> arrayB[0]; 
    cout << "Digite o segundo elemento do arranjo b: ";
    cin >> arrayB[1];
    cout << "Digite o terceiro elemento do arranjo b: ";
    cin >> arrayB[2];
    cout << "Digite o quarto elemento do arranjo b: ";
    cin >> arrayB[3];
    cout << "Digite o quinto elemento do arranjo b: ";
    cin >> arrayB[4];

    for(i = 0 ; i < 5 ; i++) {
        resultado += arrayA[i] * arrayB[i];
    }

    cout << "O produto escalar de a[] por b[] e " << resultado << endl;

}