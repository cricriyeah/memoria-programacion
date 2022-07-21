//Cristofer Jimenez Fernadez IDS turno matutino grupo A
//ejercicios con funciones
#include <iostream>
#include <ctime>


using namespace std;
int arreglo[20]={};
void llenarArreglo ();
void imprimirArreglo();
int obtenerIndice();
int mayor ();
int menor();
bool buscar();
int main()
{
int op;
cout<< "Hola usuario, eliga el numero de actividad que desea ver: \n1) encuentra un valor en un arreglo\n2) programa que encuentre e imprima el numero minimo y el maximo de un arreglo\n3) programa que llene un arreglo de tamaño 20 con numeros aleatorios del 1 al 20 sin que se repitan"<<endl;
cin>> op;
switch (op)
    {
        case 1:
            {

                llenarArreglo();
                imprimirArreglo ();
                cout <<"el numero se encuentra en: "<<obtenerIndice();

                break;

            }
        case 2:
            {
                llenarArreglo();
                imprimirArreglo();
                cout << "el numero mayor es: "<< mayor()<<endl;
                cout<< "el numero menor: "<<menor();
                cout<<endl<<endl;
                break;
            }
        case 3:
            {
                break;
            }


    }
    return 0;
}
void llenarArreglo()
{
    srand(time(0));
            for(int x = 0; x < 20; x++)
            {
                arreglo[x] = rand() % 100 + 1;

            }
}
void imprimirArreglo()
{
     for(int x = 0; x < 20; x++)
            {
                cout << arreglo[x] << endl;
            }
}
int obtenerIndice()
{
    int in;
    int y=0;
    int valor;
    cout << "Ingrese el valor que busca en el arreglo"<< endl;
    cin>> valor;
    for(y = 0; y < 20; y++)
    {
        if (valor== arreglo[y])
        {
            in=y;
            cout<< endl<<in;
            break;
        }
    }
    if (y==20)
    {
        in=-1;

    }
return in;

}
int mayor ()
{
    int z;
    for (z = 0; z < 19; z++)
        {
            if (arreglo[z] > arreglo[z + 1])
            {
                arreglo[z + 1] = arreglo[z];

            }
        }
return arreglo [z];
}


int menor()
{
    int y;
    for (y = 0; y > 0; y++)
        {
            if (arreglo[y] < arreglo[y - 1])
            {
                arreglo[y - 1] = arreglo[y];

            }
        }
return arreglo [y];
}
