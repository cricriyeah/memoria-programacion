// Cristofer Jimenez Fernandez, IDS, turno matutino
//Hacer un codigo que transforme grados celcius a farenheit
using namespace std;
int celcius;
int faren;
int main()
{
    cout << "Hola usuario, por favor ingrese el valor en grados celcius que desea convertir";
    cin >> celcius;
    faren= (1.8*celcius) + 32;
    cout << "La conversion a grados farenheit es igual a:  " << faren << "." << endl;
    return 0;
}
