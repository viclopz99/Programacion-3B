#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int  dados ();
void hist (int lados[], int n);



int  main ()
{

	srand ( time ( NULL ));

	int lados [ 11 ] = {0};
    int suma=0;

	    for  ( int i=1; i <= 100; i ++)
	    {
	    	suma = dados ();

	    	for  ( int i = 0; i < 11; i ++)
            {

                if (suma == i+2)
                {
                    lados[i]++;
                }
            }

		}

		 hist(lados,11);


    return 0;
}

int dados()
{
    int dado=0;


    for(int i=0; i<2; i++)
    {
        dado += 1 + rand()%(6);
    }


    return (dado);
}



void hist (int lados[], int n)
{


    for (int i=0; i<n; i++)
    {
        cout << i+2 << "\t" ;

        for(int a=0; a<lados[i]; a++)
        {
          cout << " * ";
        }
        cout << endl;
    }
}
