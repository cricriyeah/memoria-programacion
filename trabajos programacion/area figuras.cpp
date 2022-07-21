//Cristofer Jimenez Fernandez IDS grupo A turno matutino
//ejercicio con 3 funciones para cada area de las 3 figuras
#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <conio.h>

using namespace std;
float area;
int funcionRectangulo()
{
    int h,b;
    cout<<"ingrese la base"<<endl;
    cin>> b;
    cout<<"ingrese la altura"<<endl;
    cin >> h;
    area= b*h;
    return area;
}
float funcionCirculo()
{
    float pi=3.1416;
    int rad;
    cout <<"ingrese el radio del circulo"<<endl;
    cin>> rad;
    area=pi*(rad*rad);
    return area;
}
float funcionTriangulo()
{
    int a, b;
    cout <<"ingrese la base del triangulo" <<endl;
    cin>> b;
    cout<< "ingrese la altura del triangulo"<<endl;
    cin>> a;
    area=(b*a)/2;
    return area;
}

int main()
{
    int opcion;
    cout <<"que figura desea?"<<endl;
    cout << " 1) rectangulo"<<endl;
    cout << " 2) circulo"<<endl;
    cout << " 3) triangulo"<<endl;
    cin>> opcion;
    switch (opcion)
    {
    case 1:
        {
            cout<<endl;
            funcionRectangulo();
            cout<< "el area del rectangulo: "<< area;
            break;
        }
    case 2:
        {
            cout<<endl;
            funcionCirculo();
            cout<< "el area del circulo: "<< area;
            break;
        }
    case 3:
        {
            cout<<endl;
            funcionTriangulo();
            cout<< "el area del triangulo: "<< area;
            break;

        }
    }
}
