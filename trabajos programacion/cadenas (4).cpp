//Cristofer Jimenez Fernandez, IDS turno matutino, segundo semestre grupo A
//ejercicios usando cadenas y arreglos

#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int z;
    cout<< "ingrese el numero de actividad que desea ver: ";
    cin>> z;
    switch (z)
    {
        case 1:
            {
                int par[20] = { 0 }, impar[20] = { 0 }, ale[20];
                int aux = 0;

                srand(time(0));

                //genera aleatorios
                for (int i = 0; i < 20; i++)
                {
                    ale[i] = rand() % 100 + 1;

                    cout << ale[i] << endl;
                }
                cout << endl << endl;
                cout << "numeros acomodados de menor a mayor: ";
                //los acomoda de mayor a menor
                for (int i = 0; i < 20; i++) {
                    for (int j = i + 1; j < 20; j++) {
                        if (ale[i] < ale[j]) {

                            aux = ale[j];
                            ale[j] = ale[i];
                            ale[i] = aux;

                        }

                    }
                    cout << " " << ale[i];
                }
                break;
            }

        case 2:

            {

                int contador=0;
                int contador2 = 0;
                int x=0;
                string nombre;
                cout << "Hola usuario, ingrese la cantidad de nombres que va a ingresar" << endl;
                cin >> x;
                do
                {
                    cout << "ingrese el nombre del alumno" << endl;
                    cin.ignore();
                    cin >> nombre;
                    for (int i = 0; i == contador; i++)
                    {

                        if (nombre[i] != 0)
                        {
                            contador++;
                        }
                        else
                        {
                            break;

                        }


                    }
                    cout << "el alumno tiene: "<< contador << " letras"<< endl;
                    contador2++;
                    contador=0;

                }
                while (contador2 != x);
                break;
            }

        case 3:

            {

                int i;
                int contador=0;
                int y;
                int x;
                string palabra;
                cout << "ingrese la palabra" << endl;
                getline(cin, palabra);
                for (int i = 0; i == contador; i++)
                {

                    if (palabra[i] != 0)
                    {
                        contador++;
                    }
                    else
                    {
                        break;

                    }


                }
                cout << "En reversa:" << endl;
                for (y = 0; y < contador; y++)
                {

                    cout << palabra[ contador- y - 1];

                }
            break;
            }

        case 4:

            {
                string palabra;
                int contador = 0;
                cout << "Hola usuario, ingrese una palabra"<<endl;
                cin>> palabra;
                for (int i = 0; i == contador; i++)
                {

                    if (palabra[i] != 0)
                    {
                        contador++;
                    }
                    else
                    {
                        break;
                    }
                }
                for (int x = 0; x < contador; x++)
                {
                    if (palabra[x] >= 97 && palabra[x] <= 122)
                    {
                        palabra[x] = palabra[x] - 32;
                    }

                }
                cout << palabra << endl;

            }





    }


}
