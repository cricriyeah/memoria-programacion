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
    int matrizmemo[5][4]={0};
    int matrizoculto[5][4]={0};
    int contador=0;
    int numerox=0;
    int numeroy=0;
    int caracteres[20]={1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,0,0};

int main()
{


    srand(time(0));
    cout << "Bienvenido usuario" << endl;
    delay(2);
    cout << "estas son sus cartas " << endl;
    delay(1);

    do
    {
        numerox= rand()%5;
        numeroy=rand()%4;
        if (matrizmemo[numerox][numeroy]==0)
        {
             matrizmemo[numerox][numeroy] = caracteres[contador];
             contador++;
        }
        else
        {
            do
            {
                numerox= rand()%5+0;
                numeroy=rand()%4+0;
            }
            while(matrizmemo[numerox][numeroy]!=0);

            matrizmemo[numerox][numeroy] = caracteres[contador];

            contador++;

        }
    }
    while(contador<20);


    for (int x=0; x<5; x++)
    {
        cout<<"|  ";
        for(int y=0; y<4; y++)
        {

            cout<<matrizmemo[x][y]<<"  |  ";

        }
        cout<<endl;
    }
return 0;

}
