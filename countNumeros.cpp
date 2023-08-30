#include <iostream>

using namespace std;

int main() {
    int  num = 0, par = 0, impar = 0;

    for(int i = 1 ;  i <= 5; i++) {

    cout << "Digite o numero" << to_string(i) << endl;
    cin >> num;

    if(num  % 2 == 0) {
        par++;
    }else {
        impar++;
    }

    }
    

    cout << "Voce digitou " << par << " numeros pares e " << impar << " numeros impares" << endl;
}
