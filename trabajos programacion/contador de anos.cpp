//Cristofer Jimenez Fernandez
//IDS turno matutino, 2do semestre
//crear un codigo que indique la cantidad de anios, meses y dias dentro de un numero



#include <iostream>

using namespace std;
int num;
int anio;
int semana;
int dias;
int main ()
{
   cout << "Hola usuario, por favor ingrese su numero total que decia convertir"<< endl;
   cin >> num;
   anio= num/365;
   dias= (num%365)%7;
   semana= (num%365)/7;
   cout<< "la cantidad de anios es la siguiente: "<< endl;
   cout<< anio << endl;
   cout<< "la cantidad de dias es la siguiente: " << endl;
   cout<< dias<< endl;
   cout<< "la cantidad de semanas es la siguiente: " <<endl;
   cout<< semana<< endl;
   return 0;
}
