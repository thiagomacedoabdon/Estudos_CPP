#include <iostream>
using namespace std;

int main (){

    const double PI = 3.1415;
    double radius;

    cout << "Digite o tamanho do raio: ";
    cin >> radius;

    double area = PI * radius * radius;
    cout << "A area e: " << area;

    return 0;
}