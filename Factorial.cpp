#include <iostream>
using namespace std;
/* Este es un programa para sacar el numero factorial de cualquier numero, con una funcion recursiva como se me ha solicitado. */



/* Función recursiva para calcular el factorial */
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; /* El factorial de 0 y 1 es 1 */
    }
    return n * factorial(n - 1); /* Llamada recursiva */
}

int main() {
    int numero;
    
    cout << "Introduce un número: ";
    cin >> numero;
    
    
    /* Llamada a la funcion que realiza todo el proceso */
    int resultado = factorial(numero);
    
    /* Impresion */
    cout << "El factorial de " << numero << " es: " << resultado << endl;

    return 0;
}
