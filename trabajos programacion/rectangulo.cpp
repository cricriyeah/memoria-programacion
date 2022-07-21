// Cristofer Jimenez Fernandez, IDS, turno matutino
//Hacer un codigo que imprima el area y el perimetro de un rectangulo
#include <iostream>

using namespace std;
int x;
int y;
int perimetro;
int area;
int main()
{
    cout << "Hola usuario, por favor ingrese el valor de los lados de su rectangulo para calcular su area y su perimetro";
    cin >> x;
    cin >> y;
    perimetro = (2*y)+(2*x);
    area= x*y;
    cout << "el area del rectangulo es igual a: " << area << "." << endl;
    cout << "el perimetro del rectangulo es igual a: " << perimetro << ".";
    return 0;
}
