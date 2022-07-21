#include <iostream>
#include <stdlib.h>
#include <ctime>


using namespace std;

int main()
{
	int i;
	cout << "Ingrese el numero de actividad que desea ver: " << endl; 
	cin >> i;
	switch (i) {
		case 1:
		{
			int x;

			for (x = 2; x <= 30; x++)
			{
				if (x % 2 == 0)
					cout << " " << x;
			}
		}
		break;
		case 2:
		{
			int contador = 0;
			int cantidad;
			int numero;
			int total = 0;
			cout << "Hola usuario, por favor ingrese la cantidad de valores que va a introducir" << endl;
			cin >> cantidad;
			while (contador != cantidad)
			{
				cout << " ingrese el numero que va a sumar" << endl;
				cin >> numero;
				total = total + numero;
				contador++;
			}
			cout << "la suma de todos los numeros ingresados es: " << total;
		}
		break;
		case 3:
		{
			int contador = 0;
			int cantidad;
			int edad;
			int totaledad = 0;
			int promedio = 0;
			cout << "Hola usuario, por favor ingrese la cantidad de alumnos que va a introducir" << endl;
			cin >> cantidad;
			while (contador != cantidad)
			{
				cout << " ingrese la edad del alumno" << endl;
				cin >> edad;
				totaledad = edad + totaledad;
				contador++;
			}
			promedio = totaledad / cantidad;
			cout << "el promedio de edad es igual a:  " << promedio;
		}
	}
}