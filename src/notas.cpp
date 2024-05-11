#include <iostream>
using namespace std;
int main() {

    int nota1, nota2, nota3;
    double promedio;

    cout << "Ingrese nota numero1: ";
    cin >> nota1;

    cout << "Ingrese nota numero2: ";
    cin >> nota2; 

    cout << "Ingrese nota numero3: ";
    cin >> nota3;

    promedio = (nota1 + nota2 + nota3)/3;

    cout << "El promedio final es " << promedio;
    return 0;
}