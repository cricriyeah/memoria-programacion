//Cristofer Jimenez Fernandez
//IDS turno matutino, 2do semestre
//crear un codigo que utilice todos los operadores de asignacion

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Hola usuario, porfavor asigne los valores a las variables" << endl;
    cin >> x;
    cin >> y;
    cout << "X+Y:" << endl;
    x += y;
    cout << x << endl;
    cout << "X-Y:" << endl;
    x -= y;
    cout << x << endl;
    cout << "X*Y:" << endl;
    x *= y;
    cout << x << endl;
    cout << "X/Y:" << endl;
    x /= y;
    cout << x << endl;
    cout << "X%y" << endl;
    x %= y;
    cout << x << endl;
    return 0;
}
