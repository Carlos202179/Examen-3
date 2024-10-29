#include <iostream>
#include <cstdlib>
using namespace std;

/* Este es un programa para calcular el factorial de cualquier n�mero y para simular un cajero autom�tico. */

int main() {
    int eleccion;
    int i;

    while(i==0){
    system("cls");
    
    /* Menu para elegir si queremos calcular un factorial, deseamos usar cajero o deseamos salir del programa */
    cout << "Seleccione una opci�n:\n";
    cout << "1. Calcular Factorial\n";
    cout << "2. Cajero Autom�tico\n";
    cout << "3. Salir\n";
    cout << "Elige una opci�n: ";
    cin >> eleccion;

    if (eleccion == 1) {
        int numero;
        cout << "Introduce un n�mero: ";
        cin >> numero;
        /* Llamada a la funci�n que realiza todo el proceso */
        int resultado = factorial(numero);
        /* Impresi�n */
        cout << "El factorial de " << numero << " es: " << resultado << endl;
    }
    
    else if (eleccion == 2) {
        cajeroAutomatico();
    }
    
    else if (eleccion == 3) {
        i=1;
    }
    
    else {
        cout << "Opci�n no v�lida.\n";
    }
}
    return 0;
}




/* Funci�n recursiva para calcular el factorial */
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; /* El factorial de 0 y 1 es 1 */
    }
    return n * factorial(n - 1); /* Llamada recursiva */
}

/* Funci�n para el cajero autom�tico */
void cajeroAutomatico() {
    double saldo = 20000.0;
    int opcion;
    double retiro;


/* Menu en el que se nos dejara elegir una y otra vez si deseamos utilizar el cajero automatico y de que manera */
    while (true) {
        cout << "\n--- Cajero Autom�tico ---\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retirar efectivo\n";
        cout << "3. Salir\n";
        cout << "Elige una opci�n: ";
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
                cout << "Saliendo del cajero autom�tico.\n";
                return;
            default:
                cout << "Opci�n no v�lida. Intente de nuevo.\n";
        }
    }
}








