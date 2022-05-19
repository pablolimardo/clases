#include <iostream>

using namespace std;

int main()
{
    int vueltas;
    cout << "Ingresa las vueltas: " << endl;
    cin >> vueltas;
    float mediaVuelta = 0.5;
    for(int x=1; x<=vueltas;  x++){

        mediaVuelta += 0.5;
        cout << "Esta es la vuelta nuemro: " << mediaVuelta << endl;
    }
    return 0;
}
