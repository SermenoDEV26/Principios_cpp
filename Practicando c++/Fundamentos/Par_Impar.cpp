//Determinar si un numero es par o impar.

#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingrese un numero: ";
    cin >> numero;

    // Determinar si el número es par o impar
    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es par." << endl;
    } else {
        cout << "El numero " << numero << " es impar." << endl;
    }

    return 0;
}
