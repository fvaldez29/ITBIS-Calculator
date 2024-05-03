#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    cout << "Calculadora de ITBIS" << "\n";
    string nombre;
    int precio = 0, itbis = 0;
    double porciento = 0.18;
    int total =0;


    cout << "Ingrese el nombre" << "\n";;
    cin >> nombre;
    cout << "Ingrese el precio del producto." << "\n";
    cin >> precio;

    itbis = precio * porciento;
    total = itbis + precio;
    
    cout << "Nombre del producto: " << nombre << "\n";
    cout << "El ITBS es: " << itbis << "\n";
    cout << "Total: " << total << "\n"; 

    return 0;
}