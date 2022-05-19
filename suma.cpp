#include <iostream>

using namespace std;

int main()
{
    float numeroUno;// Aca guardo el primer valor
    float numeroDos;// Aca guardo el segundo valor
    float resultado;// Aca va el resultado
    cout << "Ingersá el primer numero: " << endl;
    cin >> numeroUno;
    cout << "Ingresá el segundo numero: " << endl;
    cin >> numeroDos;
    resultado = numeroUno / numeroDos;
    if(resultado>10){
        cout << "El numero es mayor a 10" << endl;
    }else{
        cout << "El numero es menor que 10" << endl;
    }
    cout << "La division es: " << resultado;
    return 0;
}
