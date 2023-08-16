#include <iostream>
using namespace std;

int main () {

    bool admin = 1; 
    cout << admin << endl;

    char simbolo = '#';
    cout << simbolo << endl;

    int idade = 31;
    cout << idade << endl;

    float pi = 3.14;
    const double PI = 3.141592;
    cout << pi << endl;
    cout << PI << endl;

    short int n1 = 1;
    long int n2 = 1;
    unsigned int n3 = 1;
    long long int n4 = 1;
    cout << n1 + n2 + n3 + n4 << endl;

    cout << sizeof(char) << " byte" << endl;
    cout << sizeof(int) << " bytes" << endl;
    cout << sizeof(long int) << " bytes" << endl;
    cout << sizeof(long long int) << " bytes" << endl;
    cout << sizeof(float) << " bytes" << endl;
    cout << sizeof(double) << " bytes" << endl;

    return 0;
}