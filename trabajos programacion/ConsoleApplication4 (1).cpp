// Cristofer Jimenez Fernmandez, IDS turno matutino
// Ejercicios utilizando estructuras de seleccion e iteracion

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std; 

int main()
{
	int x;
	cout << "ingrese el numero de actividad que desea visualizar" << endl; 
    cin >> x;
   switch (x)
   {
		case 1:
		{
			int numventas;
			int contador = 1;
			int categoriacompra;
			int ventas = 0;
			int ventastele = 0;
			int ventasvideo = 0;
			int ventascompu = 0;
			int contadormil = 0;
			int contadorentre = 0;
			int contadormenor = 0;

			cout << "Hola usuario, bienvenido al sistema de ganancias de Tiki Taka, por favor ingrese los siguientes datos;" << endl;
			cout << "cuantas ventas realizo hoy?" << endl;
			cin >> numventas;
			do
			{

				cout << "cual es la categoria de la compra #" << contador << endl;
				cout << "considere que estas son las categorias con un numero asignado" << endl;
				cout << "1. televisiones" << endl;
				cout << "2. videojuegos" << endl;
				cout << "3. computadoras" << endl;
				cin >> categoriacompra;
				cout << "cual fue el total de esa venta?" << endl;
				cin >> ventas;

				switch (categoriacompra)
				{
				case 1:
					ventastele += ventas;
					break;
				case 2:
					ventasvideo += ventas;
					break;
				case 3:
					ventascompu += ventas;
				}
				if (ventas >= 1000)
				{
					contadormil++;
				}
				else if (ventas >= 500 && ventas < 1000)
				{
					contadorentre++;
				}
				else
				{
					contadormenor++;
				}
				contador++;
			} while (contador <= numventas);
			cout << "el total de ventas de las 3 categorias es de: $" << ventastele + ventasvideo + ventascompu << endl;
			cout << "el total de ventas decada catergoria es el siguiente: " << endl;
			cout << "1. televisiones= $" << ventastele << endl;
			cout << "2. videojuegos= $" << ventasvideo << endl;
			cout << "3. computadoras= $" << ventascompu << endl;
			cout << "El total de ventas mayores a $1000.00mxn es de: " << contadormil << endl;
			cout << "El total de ventas menores a $1000.00mxn y mayores a $500.00mxn es de: " << contadorentre << endl;
			cout << "El total de ventas menores a $500.00mxn es de: " << contadormenor << endl;
		}
		break; 
		case 2:
		{
			double totaldesc = 0;
			double desc = 0;
			int contador = 0;
			int valor;
			double suma = 0;
			int cantidadart = 0;
			cout << "Hola usuario, ingrese la cantidad de trajes que va a pagar" << endl;
			cin >> cantidadart;
			while (contador != cantidadart)
			{
				cout << "ingrese el valor de su traje" << endl;
				cin >> valor;
				contador++;

				if (valor >= 2500)
				{
					desc = valor * 0.15;

				}
				else
				{
					desc = valor * 0.08;

				}
				cout << "Su descuento es de: $" << desc << endl;
				cout << "el valor del traje con descuento es de: $" << valor - desc << endl;

				totaldesc = valor - desc;
				suma += totaldesc;
			}
			cout << "Su total es de: $" << suma << endl;
		}
		break;
		case 3:
		{
			int sumatotal = 0;
			int trabajadores = 1;
			int contador = 0;
			int horas;
			int suma = 0;
			int dinero;
			cout << "Hola usuario, por favor ingrese el numero de trabajores" << endl;
			cin >> trabajadores;
			do
			{
				contador++;
				cout << "Hola usuario, por favor ingrese la cantidad de horas que trabajo en la semana " << endl;
				cin >> horas;
				suma += horas;
				cout << "cuanto dinero esta cobrando por hora?" << endl;
				cin >> dinero;
				dinero = dinero * horas;
				cout << "el dinero que cobra semanalmente el trabajador " << contador << " es de : $" << dinero << endl;
				sumatotal += dinero;
			} while (contador < trabajadores);


			cout << "El total de dinero por cada trabajador es de: $" << sumatotal << endl;

		}
		break; 
		case 4: 
		{
			double manodeobra = 0;
			double fabricacion = 0;
			double produccion = 0;
			double venta = 0;
			int materia = 0;
			int numserie = 0;


			cout << "Hola usuario, bienvenido al sistema de calculos de presupuesto del cometa" << endl;
			cout << "Por favor ingrese el costo de materia prima:" << endl;
			cin >> materia;
			cout << "Por favor ingrese el numero de serie del articulo que desee del 1 al 6" << endl;
			cin >> numserie;

			switch (numserie)
			{
			case 1:
				manodeobra = (materia * 0.80);
				fabricacion = (materia * 0.28) + materia;
				break;
			case 2:
				manodeobra = (materia * 0.85);
				fabricacion = (materia * 0.30) + materia;
				break;
			case 3:
				manodeobra = (materia * 0.75);
				fabricacion = (materia * 0.35) + materia;
				break;
			case 4:
				manodeobra = (materia * 0.75);
				fabricacion = (materia * 0.28) + materia;
				break;
			case 5:
				manodeobra = (materia * 0.80);
				fabricacion = (materia * 0.30) + materia;
				break;
			case 6:
				manodeobra = (materia * 0.85);
				fabricacion = (materia * 0.35) + materia;

			}

			produccion = materia + manodeobra + fabricacion;
			venta = (produccion * 0.45) + produccion;
			cout << "El costo de produccion sera de: $" << produccion << endl;
			cout << "El precio de la venta sera de $" << venta << endl;
			cout << "El costo de la fabricacion sera de: $" << fabricacion << endl;
			cout << "El precio de la mano de obra sera de: $" << manodeobra << endl;

		}

   }


   

}



  









