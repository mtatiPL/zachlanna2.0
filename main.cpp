#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
int tab[5][5];
int suma;
int obecna;
void metodaZachlanna()
{
    srand(time(NULL));
    for(int i=0; i<5; i++)
    {
        for(int z=0; z<5; z++)
        {

            tab[i][z]=rand()%9+1;
            cout<<tab[i][z]<<"| ";


        }
        cout<<endl;

    }

}

int sumaZachlanna()
{


//obecna=tab[1][1];
//for(int i=1; i<=5; i++)
    // {


    //  for(int z=1; z<=5; z++)
    // {
    // system("Color k0");
    int i=0;
    int z=0;

    while(i<4 && z<4)
    {
        if(tab[i+1][z]>=tab[i][z+1])
        {
            cout<<suma<<"+"<<tab[i+1][z]<<"="<<suma+tab[i+1][z]<<endl;
            suma+=tab[i+1][z];
            cout<<tab[i+1][z]<<endl;

            i++;


        }
        else if(tab[i][z+1]>tab[i+1][z])
        {
            cout<<suma<<"+"<<tab[i][z+1]<<"="<<suma+tab[i][z+1]<<endl;
            suma+=tab[i][z+1];
            cout<<tab[i][z+1]<<endl;
            z++;

        }
    }


         if(z==4){
                while(i!=4){
            i++;
            cout<<suma<<"+"<<tab[i][4]<<"="<<suma+tab[i][4]<<endl;
            suma+=tab[i][4];
                }
        }
        else if(i==4){
                while(z!=4){
            z++;
            cout<<suma<<"+"<<tab[4][z]<<"="<<suma+tab[4][z]<<endl;
            suma+=tab[4][z];
                }
        }




    // }
    cout<<endl;


    // }


}





int main()
{
    metodaZachlanna();
    suma=tab[0][0];
    sumaZachlanna();
cout<<"suma metody zachlannej wynosi "<<suma<<endl;
    return 0;
}
