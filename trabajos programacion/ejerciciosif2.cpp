#include <iostream>
// Cristofer Jimenez Fernandez, IDS, turno matutino
//ejercicios usando if y if else
using namespace std;

int main()
{
    int x
    cout>> "hola usuario, ingrese el numero de actividad que desea ver"
    cin >> x

    if (x==1){
        char sexo;
    char ini;
    cout << "hola usuario por favor ingrese el sexo del alumno como M o F y la inicial de su nombre";
    cin >> sexo;
    cin >> ini;
    cout<<(int)sexo;
    cout << (int)ini;
    if ( (int)sexo==77 || sexo==109 && (int)ini<=78 && (int)ini>=97 && (int)ini<=110 )
        cout << "El alumno pertenece al grupo A y es hombre";
        else if ((int)sexo==70 || sexo==102 && (int)ini<=77 && (int)ini>=97 && (int)ini<=109)
            cout <<"El alumno pertenece al grupo A y es mujer";
            else
            cout << "el alumno pertenece al grupo B";
    }
    if (x==2) {
    int pizza;
    int ingrediente;
    cout <<"hola usuario, por favopr ingrese el ingrediente que desee"<< endl;
    cout <<"1. Albahaca" <<endl;
    cout <<"2. Pimiento"<<endl;
    cout <<"3. peperoni"<<endl;
    cout <<"4. Jamon"<<endl;
    cout <<"5. Salmon "<<endl;
    cin >> ingrediente;
   if (ingrediente== 1)
    cout << "su pizza es vegetariana y sus ingredientes son: alabahaca, mozarela y salsa de tomate";
    else if (ingrediente== 2)
    cout << "su pizza es vegetariana y sus ingredientes son: pimiento, mozarela y salsa de tomate";
    else if (ingrediente== 3)
    cout << "su pizza no es vegetariana y sus ingredientes son: pepperoni, mozarela y salsa de tomate";
    else if (ingrediente== 4)
    cout << "su pizza no es vegetariana y sus ingredientes son: jamon, mozarela y salsa de tomate";
    else if (ingrediente== 5)
    cout << "su pizza no es vegetariana y sus ingredientes son: salami, mozarela y salsa de tomate";
    else
    cout << "su numero no esta en la lista de ingredientes";
    }
    if (x==3) {


float alumnos;
    float costo;
    float pago;
    cout << "hola usuario, por favor ingrese la cantidad de alumnos" << endl;
    cin >> alumnos;
    if (alumnos>=100)
        costo= 65.00;
    else if (alumnos>=50 && alumnos<=99)
        costo= 70.00;
    else if (alumnos>=30 && alumnos<=49)
        costo= 95.00;
    else if (alumnos<30){
        costo=4000/alumnos;
        cout<< alumnos;}
    pago= costo*alumnos;
    cout<< "total de viaje= " << pago<< endl;
    cout << "total a pagar por alumno= " << costo<< endl;

    }
    return 0;

}

