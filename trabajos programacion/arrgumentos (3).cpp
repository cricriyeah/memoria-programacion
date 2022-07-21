//Cristofer Jimenez Fernandez, grupo A del turno matutino
//ejercicios utilizando arreglos

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
int op;
cout<< "Hola usuario, ingrese el numero de actividad "<< endl;
cin>> op;
switch (op)
{

    case 1:
        {
            int valor;
            int tamanio=0;
            int x = 0;
            int y= 0;
            cout << "Hola usuario por favor ingrese el tamanio de su arreglo" << endl;
            cin >> tamanio;
            int arreglo[tamanio]={};
            srand(time(0));
            for(x = 0; x < tamanio; x++)
            {
                arreglo[x] = rand() % 100 + 1;
                cout << arreglo[x] << endl;
            }
            cout << "Ingrese el valor que busca en el arreglo"<< endl;
            cin>> valor;
            for(y = 0; y < tamanio; y++)
            {
                if (valor== arreglo[y])
                {
                    cout<< "el numero "<< valor<< " se encuentra en el indice "<< x<< endl;
                    break;
                }
            }
                if (y==tamanio)
                {
                    cout<< "el valor no existe en el arreglo";
                }
        break;
        }

    case 2:
        {
            int par[20] = {0}, impar[20] = {0}, ale[20];
            int aux = 0;

            srand(time(0));

            //genera aleatorios
            for (int i = 0; i < 20; i++)
            {
                ale[i] = rand() % 10 + 1;

                cout << ale[i] << endl;
            }

            //los acomoda de mayor a menor
            for (int i = 0; i < 20; i++) {
                for (int j = i + 1; j < 20; j++) {
                    if (ale[i] < ale[j]) {

                        aux = ale[j];
                        ale[j] = ale[i];
                        ale[i] = aux;
                    }
                }
            }

            for (int i = 0; i < 20; i++)
            {
                //quita los numeros iguales
                if (ale[i] == ale[i + 1])
                {
                    ale[i] = 0;
                }
            }

            cout << "Pares: " << endl;
                //pares
            for (int i = 0; i < 20; i++)
            {
                if (ale[i] > 0)
                {
                    if (ale[i] % 2 == 0)
                    {
                        par[i] = ale[i];
                    }
                }

                if (par[i] > 0)
                {
                    cout << par[i] << endl;
                }
            }
                //impares
            cout << "impares: " << endl;

            for (int i = 0; i < 20; i++)
            {
                if (ale[i] > 0)
                {
                    if (ale[i] % 2 == 1)
                    {
                        impar[i] = ale[i];
                    }
                }

                if (impar[i] > 0)
                {
                    cout << impar[i] << endl;
                }
            }
         break;
        }

    case 3:
        {

            int tamanio3;
            int tamanio2;
            int tamanio1;
            int x = 0;
            int y = 0;

            cout << "Hola usuario por favor ingrese el tamanio del primer arreglo" << endl;
            cin >> tamanio1;

            cout << "Hola usuario por favor ingrese el tamanio del segundo arreglo" << endl;
            cin >> tamanio2;

            tamanio3 = tamanio1 + tamanio2;

            cout << endl << endl;

            int arreglo1[tamanio1] = {};
            int arreglo2[tamanio2] = {};
            int arreglo3[tamanio3] = {};

            srand(time(0));
            cout<< "arreglo 2: "<< endl;

            for (x = 0; x < tamanio1; x++)//valores random 1
            {
                arreglo1[x] = rand() % 100 + 1;
                cout << arreglo1[x] << endl;
            }

            cout << endl << endl;

            cout<< "arreglo 2: "<< endl;

            for (x = 0; x < tamanio2; x++)//valores random 2
            {
                arreglo2[x] = rand() % 100 + 1;
                cout << arreglo2[x] << endl;
            }



            cout << endl << endl;

            cout<< "arreglos concatenados: "<< endl;

            for (x = 0; x < tamanio3; x++)//concatenacion
            {
                if (x < tamanio1)
                {
                    arreglo3[x] = arreglo1[x];
                }
                else
                {
                    arreglo3[x] = arreglo2[y];
                    y++;
                }
            }

            for (x = 0; x < tamanio3; x++)
            {
                cout << arreglo3[x] << endl;
            }


        break;
        }

    case 4:
        {
            int arr[20];
            int ale = 0;
            int tamanio = 21;

            srand(time(0));

            for (int i = 1; i < tamanio; i++)
            {
                ale = rand() % 20 + 1;

                if (ale == i)
                {
                    arr[i-1] = ale;
                }
                else
                {
                    i--;
                }

                cout << ale << endl;
            }

            cout << endl << endl;


            for (int i = 0; i < tamanio-1; i++)
            {
                cout<<arr[i]<<endl;
            }

        }
    }

}
