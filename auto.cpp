#include <iostream>
#include <typeinfo>
using namespace std;

int main () {
    //tipo de inferencia
    int a = 1;
    double b = 1.2;
    bool c = true;

    auto d = 1;
    auto e = 1.2;
    auto f = false;

    cout << typeid(a).name() << endl
         << typeid(b).name() << endl
         << typeid(c).name() << endl
         << typeid(d).name() << endl
         << typeid(e).name() << endl
         << typeid(f).name() << endl;

    return 0;
}