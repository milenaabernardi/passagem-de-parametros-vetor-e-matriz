#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

void ordenar(int *num3, int *num2);
void valorQuebrado(double num1, int *inteiro, double *fracionado);
int maiorValor(int a[], int tam, int maior);
int mediaInteriros(int a[], int tam);
int valoresPositivos(int a[], int tam);
int numeros(int a[], int tam, int n);
void maiorMenor(int a[], int tam);

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    ordenar(&num1, &num2);

    double fracionado = 0, num3;
    int inteiro = 0;
    cin >> num3;
    valorQuebrado(num3, &inteiro, &fracionado);

    /* 
    letra B:  
    bool has_zero(int a[], int n) {
        int i;
        for (i = 0; i < n; i++){
            if (a[i] == 0){
                return true;
            }
        }    
        return false;
    }
    */
    
    int tam, maior = 0;
    cin >> tam;
    int a[tam];

    for (int i = 0; i < tam; i++) {
        cin >> a[i];
    }
    cout << maiorValor(a, tam, maior) << endl << endl;

    cout << mediaInteriros(a, tam) << endl << endl;

    cout << valoresPositivos(a, tam) << endl << endl;

    int n = 0;
    for (n; n < tam; n++) {
        cout << numeros(a, tam, n) << " ";
    }
    cout << endl << endl;

    maiorMenor(a, tam);
}

void ordenar(int *num1, int *num2) {
    int aux;
    if (*num1 == *num2) {
        cout << "os numeros sao iguais" << endl;
    }
    else if (*num1 > *num2) {
        aux = *num1;
        *num1 = *num2;
        *num2 = aux;
    }
    cout << "numero 1:" << *num1 << endl << "numero 2:" << *num2 << endl;
}

void valorQuebrado(double num3, int *inteiro, double *fracionado) {
    *inteiro = (int)num3;
    *fracionado = num3 - *inteiro;
    cout << *fracionado << endl;
}

int maiorValor(int a[], int tam, int maior) {
    int menor = INT_MAX; 
    for (int i = 0; i < tam; i++) {
        if (a[i] > menor) {
            maior = menor = a[i];
        }
    }
    return maior;
}

int mediaInteriros(int a[], int tam) {
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += a[i];
    }
    return soma / tam;
}

int valoresPositivos(int a[], int tam) {
    int sim = 0;
    for (int i = 0; i < tam; i++) {
        if (a[i] > 0) {
            sim++;
        }
    }
    return sim;
}

int numeros(int a[], int tam, int n) {
    return a[n];
}

void maiorMenor(int a[], int tam) {
    int maior = INT_MIN; 
    int menor = INT_MAX;
    for (int i = 0; i < tam; i++) {
        if (a[i] > maior) {
            maior = a[i];
        }
    }
    for (int i = 0; i < tam; i++) {
        if (a[i] < menor) {
            menor = a[i];
        }
    }
    cout << menor << " " << maior << endl;
}

/*
6. a linha 16 imprime *ss, que na função, é inicializado como 0 e soma i conforme x é divisível por i, até que i se iguale a c.
7. a linha 19 decide se o número tem a característica ou não, tal que existe caso o quadrado da soma do resto da divisão deste por 100 e o resultado dessa divisão seja igual ao numero;
8. mostra quantos divisores o número tem.
*/