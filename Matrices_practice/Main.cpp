#include "Funciones.h"
#include <iostream>

using namespace std;

void regresaralmenu() {
    int opcion;
    cout << "\n Quiere regresar al menu? Si = 1 No = 2 \n";
    cout << "Opcion: "; cin >> opcion;

}

int main() {
    int opcion;
    Algebra run;

    do {
        cout << "Que quieres hacer? \n";
        cout << "--------------------------------- \n";
        cout << "1 - Multiplicar matrices \n";
        cout << "2 - Sacar seno\n";
        cout << "3 - Sacar coseno\n";
        cout << "4 - Sacar tangente\n";
        cout << "5 - Salir del programa\n";
        cout << "---------------------------------- \n";
        cout << "Opcion: "; cin >> opcion;


        switch (opcion) {
        case 1:
            run.Multiplicacion_matrices();
            cout << "---------------------------------------- \n";
            cout << "\nQuiere regresar al menu? Si = 1 No = 2 \n";
            cout << "Opcion: "; cin >> opcion;
            if (opcion == 1) {
                break;
            }
            else {
                return 0;
            }

        case 2:
            run.sacarseno();
            cout << "---------------------------------------- \n";
            cout << "\nQuiere regresar al menu? Si = 1 No = 2 \n";
            cout << "Opcion: "; cin >> opcion;
            if (opcion == 1) {
                break;
            }
            else {
                return 0;
            }

        case 3:
            run.sacarcoseno();
            cout << "--------------------------------- \n";
            cout << "\nQuiere regresar al menu? Si = 1 No = 2 \n";
            cout << "Opcion: "; cin >> opcion;
            if (opcion == 1) {
                break;
            }
            else {
                return 0;
            }

        case 4:
            run.sacartangente();
            cout << "--------------------------------- \n";
            cout << "\nQuiere regresar al menu? Si = 1 No = 2 \n";
            cout << "Opcion: "; cin >> opcion;
            if (opcion == 1) {
                break;
            }
            else {
                return 0;
            }

        case 5:
            return 0;

        default:
            cout << "\nOpcion No disponible\n";
            break;
        }
    } while (opcion != 5);
}