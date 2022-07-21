//Cristofer Jimenez Fernandez IDS turno matutino grupo A
//ejercicios con matrices


#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>

using namespace std;

int main()

{
     int z;
     cout <<"ingrese el numero de actividad que desea ver"<<endl;
     cin>> z;
     switch (z)
     {
        case 1:
        {
            string repetir;
            do
            {
                int filas=0,columnas=0,numero=0,contador=0;
                srand(time(0));
                cout<< "ingresa el numero de filas del arreglo"<<endl;
                cin>> filas;
                cout<< "ingresa el numero de columnas del arreglo"<< endl;
                cin>> columnas;
                int matriz[filas][columnas]={};
                for (int i=0; i<filas; i++)
                {
                    for(int j=0; j<columnas; j++)
                    {
                        matriz[i][j]=rand()%10+1;
                        cout<<matriz[i][j]<<", ";

                    }
                    cout<<endl;
                }
                cout<<endl;
                cout<<"ingrese el numero que desea buscar"<<endl;
                cin>> numero;
                for (int i=0; i<filas; i++)
                {
                    for(int j=0; j<columnas; j++)
                    {
                        if (numero==matriz[i][j])
                        {
                            contador++;
                        }

                    }

                }
                cout<<"el numero "<< numero<< " aparece "<< contador<<" veces en la matriz";
                cout <<endl;
                cout << "desea repetir el codigo?"<<endl;
                cin>> repetir;
            }
            while (repetir=="si");
            break;
        }
        case 2:
        {
            int numero=0,contador=0,suma=0;
            srand(time(0));
            int matriz[15][12]={};
            for (int i=0; i<15; i++)
            {
                for(int j=0; j<12; j++)
                {
                    matriz[i][j]=(rand()%40)-20;
                    cout<<matriz[i][j]<<" ";


                }

                cout<<endl;
            }
            numero=matriz[0][0];
            for (int i=0; i<15; i++)
            {
                for(int j=0; j<12; j++)
                {

                   if(matriz[i][j]<numero)

                    numero=matriz[i][j];


                }

            }
            for (int i=0; i<15; i++)
            {
                for(int j=0; j<12; j++)
                {

                    if (i<5)
                    {
                        suma= matriz[i][j]+suma;
                    }


                }

            }
            for (int i=0; i<15; i++)
            {
                for(int j=0; j<12; j++)
                {

                    if (j>=4&&j<=8)
                    {
                        if (matriz[i][j]<0)
                        {
                            contador++;
                        }
                    }


                }

            }


            cout<<endl<<"el numero menor de la matriz es: " <<numero<< endl;
            cout<<"la suma de las 5 primeras filas es: " << suma<<endl;
            cout<<"la cantidad de numeros negativos entre las columas 5 y 9 es de: "<< contador;
            break;
        }
        case 3:
        {
            int tamanio=0,numero=0,contador=0,numero2=0,x=0;
            srand(time(0));
            cout<< "ingresa el tamanio del arreglo"<<endl;
            cin>> tamanio;

            int matriz[tamanio][tamanio]={};
            for (int i=0; i<tamanio; i++)
            {
                numero=0;
                numero2=x;
                for(int j=0; j<tamanio; j++)
                {
                    if (numero2==0)
                    {
                        matriz[i][j]=numero;
                        numero++;
                    }
                    else
                    {
                        matriz[i][j]=numero2;
                        numero2--;
                    }
                cout<< matriz[i][j]<<", ";

                }
                x++;
                cout<<endl;
            }

        }
    }
    return 0;
}

