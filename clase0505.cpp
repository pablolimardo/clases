#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    string preguntas[5] = {"¿Cúal es el mejor programador del mundo?",
                            "¿Qué es mas sano?",
                            "¿De qué color es la bandera de Argentina?",
                            "¿Cúal es el país mas grande de América",
                            "¿Cúal es el país con mas población en el mundo?"};
    string respuestas[5][3] = {{"Pablo Limardo", "Cristian Borges", "Dennis Ritche"},
                                {"Coca Cola", "Agua", "Fanta"},
                                {"Amarilla y roja", "Verde y azul", "Blanca y celeste"},
                                {"Brasil", "Canadá", "Bolivia"},
                                {"China", "Rusia", "España"}};

    string respuestasCorrectas[5] = {"Dennis Ritche","Agua","Blanca y celeste","Canadá", "China"};
    int respuestaJugador[5] = {0,0,0,0,0};

    cout << "****** Pergutas y Respuestas ******" << endl;
    for(int i=0;i<5;i++){
        cout << "Pregunta " << i+1 << " : " << endl;
        cout << preguntas[i] << endl;
        cout << "Respuestas:" << endl;
        for(int j=0;j<3;j++){
          cout << j+1 << ") "<< respuestas[i][j] << endl;
        }
    cout << "------------------------" << endl;
    cout << "Seleccioná la respuesta correcta del 1 al 3. Presioná 0 para salteá la pregunta: ";
    cin >>  respuestaJugador[i];
    }
    cout << "****** Resultado ******" << endl;
    int correctas, incorrectas, salteadas;
    for(int i=0;i<5; i++){
        if(respuestaJugador[i] !=0){
            if(respuestasCorrectas[i] == respuestas[i][respuestaJugador[i]-1]){
                correctas++;
            }else{
                incorrectas++;
            }
        }else{
            salteadas++;
        }
    }

    cout << "Correctas: " << correctas << endl;
    cout << "incorrectas: " << incorrectas << endl;
    cout << "Salteadas: " << salteadas << endl;


    return 0;
}
