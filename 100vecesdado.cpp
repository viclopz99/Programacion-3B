#include  <stdlib.h>
#include  <iostream>
#include  <time.h>


using namespace  std ;

void menu ();
int  dado ();
int  histo(int tam);


int  main () {

	srand ( time ( NULL ));

	int opcion, lados [ 6 ] = { 0 }, n;
do
{
    menu ();
	cin >> opcion;
	switch (opcion)
{


	 case  1:

	 cout << " 1er Lanzamiento: " << endl;

	 for ( int i = 1 ; i <= 100 ; i ++)
	 {
	 	n = dado ();
	 	lados [n- 1 ] ++;
	 }

	 for ( int a = 1 ; a <= 6 ; a ++)
    {

	 	cout << " Lado " << a << "  " ;
	 	cout << histo (lados [a- 1 ]) << endl;

    }
    break;

	 case  2:

	 int suma;

	 cout << " 2do Lanzamiento: " ;

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

    break;
}


}

    while (opcion != 0 );

    return 0 ;
}
void  menu ()
{
        int valor = 0 , n, fin;
    cout << " -------Menu----Dado----------- " << endl;

    cout << "  " << endl;

    cout << " Que desea hacer:  " << endl;

    cout << " lanzamiento: 1 " << endl;

    cout << " lanzamiento: 2 " << endl;

    cout << " salir:  0 " << endl;

    cout <<" Digite un numero:  ";

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

    for (i = 1;i <= tam;i ++)

    cout << " * " ;

    return i;
}
