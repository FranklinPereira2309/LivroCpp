#include <iostream>

using namespace std;

int main() {
    double celsius, fahrenheit;
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;
    fahrenheit = (9 * celsius / 5 ) + 32;
    cout << celsius << " graus Celsius equivalem a " << fahrenheit << " graus Fahrenheit" << endl; 
}