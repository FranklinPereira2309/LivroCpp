#include <iostream>
#include <cmath>
#include <locale.h>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    double altura ,imc;
    int peso;

    cout << "Digite a altura: \n";
    cin >> altura;
    cout << "Digite o peso da pessoa: \n";
    cin >> peso;
    imc = peso / pow(altura,2);
    cout << "O índice de Massa Corporal desta pessoa é " << fixed << setprecision(2) << imc << endl;


}