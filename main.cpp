#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int opcion=0;
    do{
        cout << "*****Glosario 1.0******"<<endl;
        cout << "1) Variables" << endl;
        cout << "2) Vectores" << endl;
        cout << "3) Matrices" << endl;
        cout << "4) Estructuras de control selectivas"<< endl;
        cout << "5) Estructuras de control repetitivas"<< endl;
        cout << "6) Operadores"<<endl;
        cout << "7) Salir" << endl;
        cout << "Elegi la opcion que quieras: ";
        cin >> opcion;
        switch(opcion){
        case 1:
            system("cls");
            cout <<"Variable:"<<endl;
            cout << "Es un espacion en memoria para guardar un valor."<<endl;
            cout << "Existen varios tipos de variables:"<< endl;
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        default:
            cout<< "Opcion no valida";
        }


    }while(opcion!=7);
    {
        switch(opcion){
        case '1':
            system("cls");
            cout <<"Variable:"<<endl;
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        default:
            cout<< "Opcion no valida";
        }
    }
    return 0;
}
