

#include <iostream>
#include <stdlib.h>
#include <ctime>


using namespace std;

int main()
{
    int x;
    cout << "Hola usuario, ingrese el numero de la actividad que desea ver " << endl;
    cin >> x;
    switch (x)
    {
    case 1:
    {
        int cantpasajeros;
        double kms;
        double cantpersona;
        double resultado;
        char autobus;
        cout << "hola usuario, por favor ingrese los siguientes datos: " << endl;
        cout << "que tipo de autobus van a tomar?" << endl;
        cin >> autobus;

        cout << "ingrese el numero de pasajeros" << endl;
        cin >> cantpasajeros;

        cout << "cantidad de kilometros  " << endl;
        cin >> kms;

        switch (autobus) {

        case 'a':
            if (cantpasajeros < 20) {
                resultado = 20 * kms * 2;
            }
            else {
                resultado = cantpasajeros * kms * 2;

            }

            break;

        case 'b':
            if (cantpasajeros < 20) {
                resultado = 20 * kms * 2.5;
            }
            else {
                resultado = cantpasajeros * kms * 2.5;

            }

            break;

        case 'c':
            if (cantpasajeros < 20) {
                resultado = 20 * kms * 3;
            }
            else {
                resultado = cantpasajeros * kms * 3;

            }

            break;

        }
        cantpersona = resultado / cantpasajeros;
        cout << "total del viaje " << resultado << endl;
        cout << "cantidad por persona " << cantpersona;
    }
    break;
    case 2:
    {

        char palosnombre;
        srand(time(0));
        int palos = rand() % 4 + 1;
        int numeros = rand() % 13 + 1;

        switch (palos)
        {
        case 1:
            palosnombre = 'p';
            break;
        case 2:
            palosnombre = 'c';
            break;
        case 3:
            palosnombre = 't';
            break;
        case 4:
            palosnombre = 'd';
            break;
        }
        if (palosnombre == 'p')
            cout << "tu tarjeta aleatoria es: " << numeros << " de picas";
        else if (palosnombre == 'c')
            cout << "tu tarjeta aleatoria es: " << numeros << " de corazones";
        else if (palosnombre == 't')
            cout << "tu tarjeta aleatoria es: " << numeros << " de treboles";
        else if (palosnombre == 'd')
            cout << "tu tarjeta aleatoria es: " << numeros << " de diamantes";
    }
    break;
    case 3:
    {
        int kgs;
        int sum;
        int res;
        int total;
        int tam;
        char tipuva;

        cout << "Hola usuario, ingrese el tipo de uva ya sea A o B" << endl;
        cin >> tipuva;

        cout << "tamano de la uva, ya sea 1 o 2" << endl;
        cin >> tam;

        switch (tipuva)
        {
        case 'A':
            if (tam == 1)
                sum = 10;
            else if (tam == 2)
                sum = 20;
            break;

        case 'B':
            if (tam == 1)
                res = 20;
            else if (tam == 2)
                res = 30;
            break;

        }

        cout << "Por favor, ingrese la cantidad de kilos de uva" << endl;
        cin >> kgs;

        if (tipuva == 'A')
            total = (100 + sum) * kgs;
        else if (tipuva == 'B')
            total = (100 - res) * kgs;

        cout << "El productor recibira: " << total << endl;

    }
    break;
    case 4:
    {
        char ham;
        int cant;
        char tar;
        double total;
        double des;
        double destar;
        cout << "Hola y bienvenido a el Naufrago satisfecho, por favor ingrese su orden como s si desea que sea una hamburguesa sencilla, como d si desea que sea una hamburguesa doble y como t si desea que sea una hamburguesa triple" << endl;
        cin >> ham;
        switch (ham)
        {
        case 's':
            cout << "por favor, ingrese la cantidad de hamburguesas sencillas que desea ordenar" << endl;
            cin >> cant;
            cout << "¿el pago seria con tarjeta o efectivo? indique efectivo como e y tarjeta como t" << endl;
            cin >> tar;
            total = cant * 50;
            destar = 0.05 * total;
            des = total + (destar);
            if (tar == 't') {
                cout << "Total sin cargo= " << total << endl;
                cout << "cargo por pagar con tarjeta de credito= " << destar << endl;
                cout << "total a pagar= " << des << endl;
            }
            else if (tar == 'e') {
                cout << "Total a pagar" << total << endl;
            }
            break;
        case 'd':
            cout << "por favor, ingrese la cantidad de hamburguesas dobles que desea ordenar" << endl;
            cin >> cant;
            cout << "¿el pago seria con tarjeta o efectivo? indique efectivo como e y tarjeta como t" << endl;
            cin >> tar;
            total = cant * 65;
            destar = 0.05 * total;
            des = total + (destar);
            if (tar == 't') {
                cout << "Total sin cargo= " << total << endl;
                cout << "cargo por pagar con tarjeta de credito= " << destar << endl;
                cout << "total a pagar= " << des << endl;
            }
            else if (tar == 'e') {
                cout << "Total a pagar= " << total << endl;
            }
            break;
        case 't':
            cout << "por favor, ingrese la cantidad de hamburguesas triples que desea ordenar" << endl;
            cin >> cant;
            cout << "¿el pago seria con tarjeta o efectivo? indique efectivo como e y tarjeta como t" << endl;
            cin >> tar;
            total = cant * 80;
            destar = 0.05 * total;
            des = total + (destar);
            if (tar == 't') {
                cout << "Total sin cargo= " << total << endl;
                cout << "cargo por pagar con tarjeta de credito= " << destar << endl;
                cout << "total a pagar= " << des << endl;
            }
            else if (tar == 'e') {
                cout << "Total a pagar= " << total << endl;
            }
        }
    }

    }

}