#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double raio, area, perimetro;
    double pi = 3.14;
    cout << "Digite o raio do circulo: ";
    cin >> raio;
    area = pi * pow(raio,2);
    perimetro = 2 * pi * raio;
    cout << "Um circulo de raio " << raio << " possui area " << fixed << setprecision(2) << area << 
    " e perimetro " << perimetro << endl;
   
    return 0;
}
