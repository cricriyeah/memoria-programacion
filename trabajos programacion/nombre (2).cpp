//Cristofer Jimenez Fernandez IDS grupo A turno matutino
//ejercicio con funciones que indican el numero mayor
#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <conio.h>

using namespace std;
void bienvenida ()
{
    cout <<"bienvenida!!!";
}

string nombre()
{
    string nombreprofe;
    cout << "Bienvenida profe ingrese su hermoso nombre: " << endl;
    cin >> nombreprofe;
    cout << endl;
    bienvenida();
    return nombreprofe;
}


int main()
{
      cout <<" "<< nombre() << endl;
}
