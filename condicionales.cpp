#include <iostream>

using namespace std;

int main()
{
    int a, b, opcion;
    cout << "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;
    cout << "Selecciona la operacion que quieras:" << endl;
    cout << "1- Suma" << endl;
    cout << "2- Resta" << endl;
    cout << "3- Multiplicacion" << endl;
    cout << "4- Division" << endl;
    cin >> opcion;


    // Condicional switch
    switch(opcion){
    case 1:
        cout << "Esta es la funcion de suma" << endl;
        cout << "El resultado de la suma es: " << a + b << endl;
        break;
    case 2:
        cout << "Esta es la funcion de resta" << endl;
        break;
    case 3:
        cout << "Esta es la funcion de multiplicacion" << endl;
        break;
    case 4:
        cout << "Esta es la funcion de division" << endl;
    default:
        cout << "Esta opcion no existe" << endl;
    }
    return 0;
}
