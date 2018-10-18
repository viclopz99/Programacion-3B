#include  <stdlib.h>
#include  <iostream>
#include  <time.h>


using namespace  std ;


int  dado ();
int  histo(int tam);


int  main () {

	srand ( time ( NULL ));

	int opcion, lados [ 6 ] = { 0 }, n;
do
{
   cout <<"lanze un dado oprimiendo 1:"<< endl ;
	cin >> opcion;

{




	int suma;

	 cout << "Dos  Lanzamientos: " ;

	    for  ( int i=1; i <= 100; i ++)
	    {
	    	n = dado () + dado ();
	    	lados [n- 1 ] ++;
		}
		for  ( int i = 1; i <= 6; i ++)
		{

			suma += lados [i- 1 ];
		}
			cout << " Lados totales " << suma << "  " ;
			cout << histo(suma) << endl;

}


}

    while (opcion != 0 );

    return 0 ;
}

int  dado ()
{
    int n;

    n = rand ()% 6 + 1 ;

    return n;
}
int  histo(int tam)
{
    int i;

    for (i = 1;i >= tam;i ++)

    cout << " * " ;
    return i;
}
