//Cristofer Jimenez Fernandez, grupo A del turno matutino
//ejercicios utilizando arreglos

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <ctime>


using namespace std;

int main()
{
   int num;
   cout<<"Hola usuario, ingrese el numero de actividad que desea ver: "<< endl;
   cin>> num;
   switch (num)
   {
   case 1:
       {
        int y = 0;
        int z=0;
        int aux=0;
        int x = 0;
        int arreglo[20];
        srand(time(0));
        for (x = 0; x < 20; x++)
        {
            arreglo[x] = rand() % 100 + 1;
            cout << arreglo[x] << endl;
        }
        for (z = 0; z < 19; z++)
        {
            if (arreglo[z] > arreglo[z + 1])
            {
                arreglo[z + 1] = arreglo[z];

            }
        }
        cout << endl << arreglo[z];
       }
   break;
   case 2:
       {
        int z;
        int y;
        int x;
        int n;

        cout << "Hola usuario, ingrese el tamanio de los arreglos" << endl;
        cin >> n;
        int arregloA[n] = {};
        int arregloB[n] = {};
        int arregloC[n] = {};
        for (x = 0; x < n; x++)
        {
            cout << "ingrese el valor del numero " << x << endl;
            cin >> arregloA[x];

        }
        for (y = 0; y < n; y++)
        {
            cout << "ingrese el valor del numero " << y << endl;
            cin >> arregloB[y];

        }
        for (z = 0; z < n; z++)
        {
            arregloC[z]=arregloA[z]+arregloB[z];
            cout << arregloC[z]<< " ";
        }

       }
   break;
   case 3:
       {
        int y;
        int x;
        int arreglo[20];
        srand(time(0));
        cout<< "original:"<< endl;
        for (x = 0; x < 20; x++)
        {
            arreglo[x] = rand() % 100 + 1;
            cout << arreglo[x] << endl;
        }
        cout<< "reversa:"<< endl;
        for (y = 0; y <20; y++)
        {

            cout<< arreglo[20-y-1] << endl;
        }

       }
   break;
   case 4:
       {
        int y;
        int x;
        int arregloA[5]={};
        int arregloB[4]={};

        for (x = 0; x < 5; x++)
        {
            cout << "ingrese la calificacion del alumno " << x << endl;
            cin >> arregloA[x];

        }
        for (y = 0; y < 5; y++)
        {
        if (arregloA[y]>=90)
            {
             arregloB[0]=arregloB[0]+1;
            }
        else if (arregloA[y]<90&&arregloA[y]>= 79)
            {
             arregloB[1]=arregloB[1]+1;
            }
        else if (arregloA[y]<79&&arregloA[y]>= 60)
            {
             arregloB[2]=arregloB[2]+1;
            }
        else if (arregloA[y]< 60)
            {
             arregloB[3]=arregloB[3]+1;
            }
        }
        cout <<"La cantidad de alumnos sobresalientes es de: " << arregloB[0]<< endl;
        cout <<"La cantidad de alumnos buenos es de: " << arregloB[1]<< endl;
        cout <<"La cantidad de alumnos regulares es de: " << arregloB[2]<< endl;
        cout <<"La cantidad de alumnos reprobados es de: " << arregloB[3]<< endl;
       }
   }
}
