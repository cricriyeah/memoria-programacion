#include <iostream>
// Cristofer Jimenez Fernandez, IDS, turno matutino
//ejercicios usando if y if else
using namespace std;

int main()
{
   int x;
   cout << "hola usuario, por favor ingrese el numero de la actividad que desea ver";
   cin >> x;
   if(x==1){
    int x, y, z;
    cout<< "hola usuario, por favor ingrese 3 numeros ";
    cin>> x;
    cin>> y;
    cin>>z;
    if (x>y && x>z)
        cout <<"el numero mayor es= " << x << endl;
    else if (y> x && y>z)
        cout << "el numero mayor es= " << y <<endl;
    else if (z> x && z> y)
        cout << "el numero mayor es= " << z <<endl;
   }
   if (x==2){
    int x;
 cout<< "hola usuario, por favor ingrese un numero";
 cin>> x;
 if (x>= 1)
    cout<< "el numero es positivo";
    else if (x==0)
    cout<< "el numero es igual a 0";
    else if (x<1 && x!=0)
    cout<< "el numero es negativo";
   }
   if (x==3){
    int x, z;
 cout<< "hola usuario, por favor ingrese un numero";
 cin>> x ;
 z= x%2;
 if (z==0)
    cout<< "el numero que ingresaste es par";
    else
    cout <<"el numero que ingresaste es impar";
   }
   if (x==4){

char x;
 cout << "hola, usuario por favor ingrese un caracter ";
 cin >> x;
 if ( (int)x>= 65 && (int)x<=122 )
    cout << "tu caracter pertenece al abecedario";
 else
    cout<< "tu caracter no pertenece al abecedario";
   }
   if(x==5){
    setlocale (LC_ALL, "");
 char x;

 cout << "hola, usuario por favor ingrese un caracter ";
 cin >> x;
 if ( (int)x>= 65 && (int)x<=122 )
    cout << "tu caracter pertenece al abecedario";
    else if ( (int)x>= 48 && (int)x<= 57)
    cout << "tu caracter es numerico";
    else
        cout << "tu caracter es especial";
   }
   if (x==6){
    int x, y, z;

    cout << "hola usuario, ingrese los valores de los 3 angulos de su triangulo";
    cin >> x;
    cin>> y;
    cin>> z;
    if (x+y+z== 180)
        cout<< "su triangulo es valido";
        else
        cout << "su triangulo es invalido";
   }
   if (x==7){
    int lado1, lado2, lado3;
    cout<< "hola usuario, por favor ingrese los valores de sus lados";
    cin>> lado1;
    cin>> lado2;
    cin>> lado3;
    if (lado1== lado3 && lado2)
        cout <<"su triangulo es equilatero";
        else if (lado1==lado2 && (lado3 != lado1 && lado2))
         cout<< "su triangulo es isoceles";
         else
            cout<< "su triangulo es escaleno";
   }
    if (x==8){
        int x;
   int y;
   int num1;
   int num2;
   cout << "hola usuario, por favor ingrese el valor de su coordenada X y su coordenada Y";
   cin>> x;
   cin >> y;

   if (x>=1 && y>=1)
    cout<< "pertenece al primer cuadrante";
   else if (x<=-1 && y<=-1)
    cout<< "pertenece al tercer cuadrante";
    else if (x>=1 && y>=-1)
    cout<< "pertenece al cuarto cuadrante";
   else if (x>=-1 && y>=1)
    cout << "pertenece al segundo cuadrante";
    }

return 0;
}

