#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x;

    cout << "Digite o valor de x: \n";
    cin >> x;
    
    if(x > 10) {
        cout << "f(x) = " << x + 2 * pow(x,2) << endl;
         
    }else if( x <= 10) {
        cout << "f(x) = " << 10 << endl;
        
    }

}
