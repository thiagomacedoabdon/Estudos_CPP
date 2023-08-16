#include <iostream>
using namespace std;

int main () {

    string titulo = "Sr. ";
    string nome("Joao");
    string end(10, '!'); //para multiplicar os caracteres

    cout << nome.size() << endl;
    cout << nome.back() << endl; //para pegar a ultima letra
    cout << nome[1] << endl; //para pegar atraves do indice
    cout << titulo + nome << endl;
    
    nome += " Pedro";
    cout << nome << endl;
    
    nome.append("???");
    cout << nome << endl;

    nome.append(end);
    cout << nome << endl;

    cout << titulo.append(nome) << endl;
    
    return 0;
}