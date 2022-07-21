// Cristofer Jimenez Fernandez, IDS, turno matutino
//Hacer un codigo que utilize todos los operadores aritmeticos

using namespace std;
int x= 5;
int y= 10;
int suma;
int main()
{
    suma= (x+y+2*y/x)%y;
    cout << suma;
    return 0;
}
