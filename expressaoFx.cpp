#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, fx;

    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    fx = (pow(b,3) + a * b) - (2 * b) + (a % b);
    cout << "f(x) = " << fx << endl;
}