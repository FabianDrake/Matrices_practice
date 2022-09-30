#include <iostream>
#include <math.h>
#define PI 3.141592654

using namespace std;

class Algebra {
private:
    int fila, colm, number;
    float x, seno, coseno, tangente, grados;
public:
    void Multiplicacion_matrices();
    void operaciones_grados();
    void operacionnes_radianes();
    void sacarseno();
    void sacarcoseno();
    void sacartangente();
};


void Algebra::Multiplicacion_matrices() {

    int A[20][20], B[20][20], C[20][20];

    cout << "-------------------------------------------\n";
    cout << "Ingrese la matriz A\n";
    cout << "Digite el numero de filas de A: "; cin >> fila;
    cout << "\nDigite el numero de columnas de A: "; cin >> colm;
    cout << "\n";
    for (int i = 0; i < fila; ++i)
        for (int j = 0; j < colm; ++j)
        {
            cout << "Digite un numero: [" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }

    cout << "Su matriz A es:\n";
    cout << "\n";
    for (int i = 0; i < fila; ++i) {
        for (int j = 0; j < colm; ++j) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";
    cout << "-------------------------------------------\n";
    cout << "Ingrese la matriz B\n";
    cout << "Filas de A ya definidas";
    cout << "\nDigite el numero de columnas: "; cin >> number;
    cout << "\n";
    for (int i = 0; i < colm; ++i)
        for (int j = 0; j < number; ++j) {
            cout << "Digite un numero: [" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }

    cout << "Su matriz B es:\n";
    cout << "\n";
    for (int i = 0; i < colm; ++i) {
        for (int j = 0; j < number; ++j) {
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }

    //Declaramos lo que va a contener nuestra matriz c 
    for (int i = 0; i < fila; ++i)
        for (int j = 0; j < number; ++j)
            C[i][j] = 0;


    //Sentenciamos la formula para sacar la matriz c
    cout << "\n";
    for (int i = 0; i < fila; i++)
        for (int j = 0; j < number; j++)
            for (int z = 0; z < colm; z++)
                C[i][j] += A[i][z] * B[z][j];

    cout << "\n";
    cout << "La matriz" << " A " << " x " << " B " << " es: \n";
    cout << "Resultado:\n";
    cout << "\n";


    cout << "Matriz C \n";
    cout << "\n";
    for (int i = 0; i < fila; ++i) {
        for (int j = 0; j < number; ++j) {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }
}


void Algebra::operaciones_grados() {
    cout << "-------------------------------------------\n";
    cout << "ingresa un numero: \n"; cin >> x;

    grados = x * PI / 180;
    seno = sin(grados);
    coseno = cos(grados);
    tangente = tan(grados);
    cout << "Su resultado en grados es:\n";
    cout << "\n";
    cout << "El seno es: " << seno << "\n";
    cout << "El coseno es: " << coseno << "\n";
    cout << "El tangente es: " << tangente << "\n";
}


void Algebra::operacionnes_radianes() {
    cout << "-------------------------------------------\n";
    cout << "ingresa un numero: \n"; cin >> x;

    seno = sin(x);
    coseno = cos(x);
    tangente = tan(x);
    cout << "Su resultado en radianes es:\n";
    cout << "\n";
    cout << "El seno es: " << seno << "\n";
    cout << "El coseno es: " << coseno << "\n";
    cout << "El tangente es: " << tangente << "\n";
}

void Algebra::sacarcoseno() {
    cout << "--------------------------------------------";
    cout << "Ingresa un numero: "; cin >> x;

    coseno = cos(x);
    cout << "Su resultado es: " << coseno << "\n";
}

void Algebra::sacarseno() {
    cout << "--------------------------------------------";
    cout << "Ingresa un numero: "; cin >> x;

    seno = sin(x);
    cout << "Su resultado es: " << seno << "\n";
}

void Algebra::sacartangente() {
    cout << "--------------------------------------------";
    cout << "Ingresa un numero: "; cin >> x;

    tangente = tan(x);
    cout << "Su resultado es: " << tangente << "\n";
}