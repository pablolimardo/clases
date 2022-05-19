#include <iostream>

using namespace std;

int main()
{
    char opcion;
    do{
        cout << "**** ALUMNOSYSTEM ****" <<endl<<endl;
        cout << "a- Datos del Alumno" << endl;
        cout << "b- Calculador de Promedio" << endl;
        cout << "c- Horarios" << endl;
        cout << "d- Salir"<< endl;
        cout << "Ingresa la opcion deseada:";
        cin >> opcion;


    switch(opcion){
    case 'a': // Datos del Alunmo
        cout << "Nombre: Juan Perez"<< endl;
        cout << "Edad: 15 años" << endl;
        cout << "Division: 3° 1° ACPI" << endl;
        break;
    case 'b': //Calculador de Notas
        float notaUno, notaDos, notaTres, promedio;
        cout << "Ingresa la primer nota: ";
        cin >> notaUno;
        cout << "Ingresa la segunda nota:";
        cin >> notaDos;
        cout << "Ingresa la tercer nota: ";
        cin >> notaTres;
        promedio = (notaUno + notaDos + notaTres) / 3;
        cout << "El promedio de las notas es: " << promedio << endl;
        break;
    case 'c': // Horarios
        cout << "Esta es la seccion de horarios" << endl;
        break;
    case 'd': //salir
        break;

    }
} while(opcion != 'd');


    return 0;
}
