#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string>

using namespace std;

int menu();

float fun1(int x);

void tabf1(int x);

float fun2(int x, int y);

void tabf2(int limx, int limy);

float fun3(int x);

void tabf3(int x);


int main()
{
	int op;
	op = menu();
	if (op == 1)
	{
		float x;

		cout << "Ingresa el valor max de x:  " << endl;

		cin >> x;

		tabf1(x);
	}
	else if (op == 2)
	{
		tabf2(5, 5);
	}
	else if (op == 3)
	{
		int x, f;

		cout << "Ingresa el valor max de x: " << endl;

		cin >> x;

		tabf3(x);
	}

	cin.get();
	cin.get();

	return 0;
}

int menu()
{
	int opcion = 0;

	cout << "1.- f(x) = 3Raiz2x^2 / 2x - 3.  " << endl;

	cout << "2.- f(x,y) = 2xy - 3y.  " << endl;

	cout << "3.- x>0 2x^3 y x<=0 3x^2.  " << endl;

	cout << "Ingresa el numero de la funcion:  " << endl;

	cin >> opcion;

	if (!(opcion == 1 || opcion == 2 || opcion == 3))
	{
		do
		{
			cout << "Ingresa una opcion valida 1,2 o 3: " << endl;

			cin >> opcion;

		} while (!(opcion == 1 || opcion == 2 || opcion == 3));
	}
	return opcion;
}

float fun1(int x)
{
	float z;

	z = pow(2 * (float)x * (float)x, 1 / 3) / (2 * (float)x - 3);

	return z;
}

void tabf1 (int x)
{
	cout << "| x |  f(x)\n";

	for (int i = 0; i <= x; i++)
	{
		cout << "| " << i << " | => " << fun1(i) << " \n";
	}
}

float fun2(int x, int y)
{
	float g;

	g = (2 * (float)x * (float)y) - (3 * (float)y);

	return g;
}

void tabf2(int limx, int limy)
{
	cout << " x | y | f(x,y) \n";

	for (int y = 1; y <= limy; y++)
	{
		for (int x = 1; x <= limx; x++)
		{
			cout << " " << x << " | " << y << " | " << fun2(x, y) << "\n";
		}
	}
}
float fun3(int x)
{
	float y;
	if ((float)x > 0)
	{
		y = 2 * ((float)x*(float)x*(float)x);
	}
	else
	{
		y = 2 * ((float)x*(float)x);
	}
	return y;
}

void tabf3(int x)
{
	cout << "| x |  f(x)" << endl;

	for (int i = 0; i <= x; i++)
	{
		cout << "| " << i << " | => " << fun3(i) << " "<< endl;
	}
}
