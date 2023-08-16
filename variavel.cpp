#include <cstdio>

int main() {

    int valor = 99; //valor inteiro

    double preco = 99.80; // double premite o uso de casa decimal
    double tax = 0.08;
    double PrecoFinal = preco * (1 + tax);
    printf("O preço final é %.2f", PrecoFinal);
    
    return 0;
}