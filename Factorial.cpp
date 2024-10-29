#include <iostream>
#include <cstdlib>
using namespace std;

/* Este es un programa para calcular el factorial de cualquier número y para simular un cajero automático. */

int main() {
    int eleccion;
    int i;

    while(i==0){
    system("cls");
    
    /* Menu para elegir si queremos calcular un factorial, deseamos usar cajero o deseamos salir del programa */
    cout << "Seleccione una opción:\n";
    cout << "1. Calcular Factorial\n";
    cout << "2. Cajero Automático\n";
    cout << "3. Salir\n";
    cout << "Elige una opción: ";
    cin >> eleccion;

    if (eleccion == 1) {
        int numero;
        cout << "Introduce un número: ";
        cin >> numero;
        /* Llamada a la función que realiza todo el proceso */
        int resultado = factorial(numero);
        /* Impresión */
        cout << "El factorial de " << numero << " es: " << resultado << endl;
    }
    
    else if (eleccion == 2) {
        cajeroAutomatico();
    }
    
    else if (eleccion == 3) {
        i=1;
    }
    
    else {
        cout << "Opción no válida.\n";
    }
}
    return 0;
}




/* Función recursiva para calcular el factorial */
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; /* El factorial de 0 y 1 es 1 */
    }
    return n * factorial(n - 1); /* Llamada recursiva */
}

/* Función para el cajero automático */
void cajeroAutomatico() {
    double saldo = 20000.0;
    int opcion;
    double retiro;


/* Menu en el que se nos dejara elegir una y otra vez si deseamos utilizar el cajero automatico y de que manera */
    while (true) {
        cout << "\n--- Cajero Automático ---\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retirar efectivo\n";
        cout << "3. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;

        /* Metodo por el cual nos movemos a travez de las opciones del cajero */
        switch (opcion) {
            case 1:
                cout << "Su saldo actual es: $" << saldo << endl;
                break;
            case 2:
                cout << "Ingrese la cantidad a retirar: ";
                cin >> retiro;
                if (retiro > saldo) {
                    cout << "Fondos insuficientes.\n";
                } else {
                    saldo -= retiro;
                    cout << "Retiro exitoso. Su nuevo saldo es: $" << saldo << endl;
                }
                break;
            case 3:
                cout << "Saliendo del cajero automático.\n";
                return;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
        }
    }
}








