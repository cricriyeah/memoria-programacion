//Cristofer Jimenez Fernandez IDS grupo A turno matutino
//ejercicio con 2 funciones para saber que numero es mayor
#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <conio.h>
int num;
using namespace std;
int mayor()
{
    int num1,num2;

        cout << "Ingresa 2 numeros para evaluar cual es el mayor y el menor" << endl;
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        if (num1>num2)
        {
            num=num1;
            return num;
        }
        else if (num2>num1)
        {
             num=num2;
            return num;
        }
}

int main()
{
    int numero;
    numero=mayor();
    cout<<"el numero mayor es: "<<num<<endl;
}
