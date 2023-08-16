#include <iostream>
using namespace std;

int main () {

    cout << 2 + 2 << endl;
    cout << 2 - 2 << endl; 
    cout << 2 * 2 << endl;
    cout << 2 / 2 << endl;
    cout << 2 % 2 << endl;
    cout << 10 + 3 * 7 << endl;
    cout << (10 + 3) * 7 << endl;

    int x;
    int y;

    cout << "Diga um numero: ";
    cin >> x;

    cout << "Digite outro numero: ";
    cin >> y;

    cout << "Resultado: " << endl;
    cout << x + y << endl;
    cout << x - y << endl; 
    cout << x * y << endl;
    cout << x / y << endl;
    cout << x % y << endl;


    return 0;
}