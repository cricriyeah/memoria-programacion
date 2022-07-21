// Cristofer Jimenez Fernmandez, IDS turno matutino
// Ejercicios utilizando arreglos

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std; 

int main()
{
	int respuesta=1;
	while (respuesta == 1)
	{
		int y=0;
		cout << "Hola usuario, por favor ingrese el numero de actividad que desea ver" << endl;
		cin >> y;
		switch (y)
		{
			case 1:
			{
				int x = 0;
				int arreglo[20];
				srand(time(0));
				for (x = 0; x < 20; x++)
				{
					arreglo[x] = rand() % 100 + 1;
					cout << arreglo[x] << endl;
				}
			}
			break;
			case 2:
			{
				int arreglo[10];
				int x = 0;
				int suma = 0;

				srand(time(0));


				for (x = 0; x < 10; x++)
				{

					arreglo[x] = rand() % 100 + 1;
					suma = suma + arreglo[x];
					cout << arreglo[x] << ", ";
				}

				cout << "la suma de los valores es de: " << suma << endl;
			}
			break;
			case 3:
			{
				int x, arreglo[50];
				int indice = 0;
				for (x = 0; x < 100; x += 2)
				{
					arreglo[indice] = x + 2;
					cout << arreglo[indice] << endl;
					indice++;
				}
			}

		}
		cout << "quieres volver a repetirlo?, 1 es si, 2 es no" << endl; 
		cin >> respuesta; 
	}
}

