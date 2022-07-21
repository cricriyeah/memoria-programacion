//Cristofer Jimenez Fernandez IDS grupo A turno matutino
//ejercicio con matriz
//profe no me di cuenta de que tenia invertida la x y la y hasta el final :c asi que solo lo cambie en los couts, no se enoje porfis
#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <conio.h>

using namespace std;

void delay(int secs) {
    for (int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}

    //variables
    int cox, coy;
    int matrizlocker[6][6] = {};
    int contra, contrausuario;
    int matriz1[6][6] = {};
    char opcion;
int main()


{
    //locker
    cout << "Bienvenido usuario" << endl;
    delay(2);
    cout << "este es su locker: " << endl;
    delay(1);

    for (int x = 0; x < 6; x++)
    {
        for (int y = 0; y < 6; y++)
        {

            cout << matrizlocker[x][y] << "| ";

        }
        cout << endl;
    }
    delay(2);
    cout << "de momento esta vacio" << endl;
    delay(2);
    cout << "vamos a llenarlo de cosas" << endl;
    cout << "ingrese las coordenadas del slot donde va a ingresar sus cosas" << endl;
    delay(1);
    cout << "coordenada en y: ";
    cin >> cox;
    delay(1);
    cout << "coordenada en x: ";
    cin >> coy;
    cout << endl << endl;

    matrizlocker[cox-1][coy-1] = 1;
    delay(2);

    //contrasenia

    cout << "primero necesita una contrasenia para guardar sus cosas" << endl;
    delay(1);
    cout << "ingrese una contrasenia de solo numeros" << endl;
    cin >> contrausuario;
    contra = contrausuario;
    matriz1[cox-1][coy-1]= contra;
    //locker
    system("cls");
    cout << "su matriz actualizada es :" << endl;
    for (int x = 0; x < 6; x++)
    {
        for (int y = 0; y < 6; y++)
        {

            cout << matrizlocker[x][y] << "| ";

        }
        cout << endl;
    }
    //opciones
    delay(2);
    do{
        cout<<"que desea hacer ahora?: \na) ingresar otra cosa en un slot diferente\nb) remover una cosa de un slot\nc) cerrar el programa "<< endl;
        cin>> opcion;
        switch (opcion)
        {
            case 'a':
            {
                do
                {
                    cout << "ingrese las coordenadas del slot donde va a ingresar sus cosas" << endl;
                    delay(1);
                    cout << "coordenada en y: ";
                    cin >> cox;
                    delay(1);
                    cout << "coordenada en x: ";
                    cin >> coy;
                    cout << endl << endl;

                    if (matrizlocker[cox-1][coy-1]==1)
                    {
                        do
                        {
                            cout<<"este slot esta ocupado intente con otro"<<endl;
                            delay(1);
                            cout << "ingrese las coordenadas del slot donde va a ingresar sus cosas" << endl;
                            delay(1);
                            cout << "coordenada en y: ";
                            cin >> cox;
                            delay(1);
                            cout << "coordenada en x: ";
                            cin >> coy;
                            cout << endl << endl;
                        }
                        while (matrizlocker[cox-1][coy-1]==1);
                        if (matrizlocker[cox-1][coy-1]==0)
                        {
                            matrizlocker[cox-1][coy-1]=1;
                        }
                    }
                    else
                    {
                        matrizlocker[cox-1][coy-1]=1;
                    }
                    delay(2);

                    //contrasenia
                    cout << "ingrese una contrasenia de solo numeros" << endl;
                    cin >> contrausuario;
                    contra = contrausuario;
                    matriz1[cox-1][coy-1]= contra;
                     //locker
                    system("cls");
                    cout << "su matriz actualizada es :" << endl;
                    for (int x = 0; x < 6; x++)
                    {
                        for (int y = 0; y < 6; y++)
                        {

                            cout << matrizlocker[x][y] << "| ";

                        }
                        cout << endl;
                    }
                    cout <<"quieres agregar otra cosa al locker?"<<endl;
                    cin>> opcion;
                }
                while(opcion=='y');
                break;

            }
            case 'b':
            {
                do{
                    cout<<"ingrese las coordenadas del slot donde desea remover sus cosas"<<endl;
                    delay(1);
                    cout << "coordenada en y: ";
                    cin >> cox;
                    delay(1);
                    cout << "coordenada en x: ";
                    cin >> coy;
                    cout << endl << endl;

                    cout<< "ingrese la contrasenia: ";
                    cin>> contrausuario;
                    if (contrausuario==matriz1[cox-1][coy-1])
                    {
                        matrizlocker[cox-1][coy-1]=0;
                        cout << "su contrasenia es correcta!, se ha modificado el slot";
                    }
                    else
                    {
                        do
                        {
                            cout<< "su contrasenia no es correcta "<<endl;
                            cout<< "ingrese la contrasenia: "<<endl;
                            cin>> contrausuario;
                        }
                        while (contrausuario!=matriz1[cox-1][coy-1]);
                        if(contrausuario==matriz1[cox-1][coy-1])
                        {
                            cout << "su contrasenia es correcta!, se ha modificado el slot"<<endl;
                            matrizlocker[cox-1][coy-1]=0;
                        }
                    }
                    delay(2);
                    system("cls");
                    cout << "su matriz actualizada es :" << endl;
                    for (int x = 0; x < 6; x++)
                        {
                            for (int y = 0; y < 6; y++)
                            {

                                cout << matrizlocker[x][y] << "| ";

                            }
                            cout << endl;
                        }
                    cout <<"quieres modificar otro slot del locker?"<<endl;
                    cin>> opcion;

                }
                while(opcion=='y');
                break;
            }
            case 'c':
            {
                system ("cls");
                cout<< endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                delay(1);
                cout<<"A"<<endl;
                delay(1);
                cout<<"D"<<endl;
                delay(1);
                cout<<"I"<<endl;
                delay(1);
                cout<<"O"<<endl;
                delay(1);
                cout<<"S"<<endl;
                delay(1);
                cout<<";)"<<endl;
                delay(3);
                exit(-1);
            }
        }

    }
    while (opcion=='n');
    return 0;
}
