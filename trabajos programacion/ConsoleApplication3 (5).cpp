//Cristofer Jimenez Fernandez, grupo A del turno matutino 
//ejercicios utilizando estructuras de iteracion 
#include <iostream>
#include <stdlib.h>
#include <ctime>


using namespace std;

int main()
{
	int i = 0;
	cout << "Hola usuario, ingrese el numero de actividad que desea ver" << endl; 
	cin >> i;
	switch (i)
	{
		case 1:
		{
			double totaldesc = 0;
			double desc = 0;
			int contador = 0;
			int valor;
			double suma = 0;
			int cantidadart = 0;
			cout << "Hola usuario, ingrese la cantidad de articulos que va a ingresar" << endl;
			cin >> cantidadart;
			while (contador != cantidadart)
			{
				contador++;
				cout << "ingrese el valor de su articulo" << endl;
				cin >> valor;
				if (valor >= 200)
				{
					desc = valor * 0.15;
					cout << "Su descuento es de: $" << desc << endl;
				}
				else if (valor > 100 && valor < 200)
				{
					desc = valor * 0.12;
					cout << "Su descuento es de: $" << desc << endl;
				}
				else
				{
					desc = valor * 0.10;
					cout << "Su descuento es de: $" << desc << endl;
				}
				totaldesc = valor - desc;
				suma += totaldesc;
			}
			cout << "Su total es de: $" << suma << ".00" << endl;
		}
		break;
		case 2:
		{
			int numeroadivinar = 0;
			int contador = 1;
			srand(time(0));
			int numero = rand() % 100 + 1;
			cout << "Hola usuario, por favor ingrese un numero del 1 al 100, tiene 4 intentos para adivinar" << endl;
			cout << numero << endl;
			cin >> numeroadivinar;
			while (contador != 4 && numeroadivinar != numero)
			{
				contador++;
				cout << "vuelva a intentarlo" << endl;
				cin >> numeroadivinar;
			}
			if (contador == 4)
				cout << "Se terminaron los intentos, usted ha perdido";
			else if (numero = numeroadivinar)
				cout << "Usted ha ganado!!!";
		}
		break; 
		case 3:
		{
			int contador = 0;
			int horas;
			int suma = 0;
			int dinero;
			while (contador != 6)
			{
				contador++;
				cout << "Hola usuario, por favor ingrese la cantidad de horas que trabajo en el dia " << contador << endl;
				cin >> horas;
				suma += horas;
			}
			cout << "cuanto dinero esta cobrando por hora?";
			cin >> dinero;
			dinero = dinero * suma;
			cout << "Su sueldo semanal es de: $" << dinero << ".00" << endl;
			cout << "El total de horas trabajadas es de: " << suma << "hrs" << endl;
		}
	}	
	

}