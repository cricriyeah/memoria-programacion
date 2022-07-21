// Cristofer Jimenez Fernandez, IDS, turno matutino
//Hacer un codigo que imprima el area, perimetro y diametro de un circulo
#include <iostream>

using namespace std;
const float pi= 3.1416;
int radio;
int diametro;
float perimetro;
float area;
int main()
{
    cout << "Hola usuario, por favor ingrese el valor del radio de su circulo para calcular su area, su perimetro y su diametro";
    cin >> radio;
    perimetro = (2*pi)*radio;
    area= pi*(radio*radio);
    diametro= 2*radio;
    cout << "el area del circulo es igual a: " << area << "." << endl;
    cout << "el diametro del circulo es igual a: " << diametro << "." << endl;
    cout << "el perimetro del circulo es igual a: " << perimetro << ".";
    return 0;
}
