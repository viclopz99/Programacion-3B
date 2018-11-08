#include <iostream>
#include <string>

using namespace std;

void declarar(int arre[][5], int nr);
void mostrar(int arre[][5], int nr);
void llenar_inverso(int arre[][5], int nr);
void mostrar_diag(int arre[][5], int nr);
void mostrar_disec(int arre[][5], int nr);
void mostrar_diagsec(int arre[][5], int nr);
void mostrar_diagA(int arre[][5], int nr);
void mostrar_diagAB(int arre[][5], int nr);
void mostrar_diagsecA(int arre[][5], int nr);
void mostrar_diagsecAB(int arre[][5], int nr);
void girarprin(int arre[][5], int nr);
void girarsec(int arre[][5], int nr);


int main ()
{
    int arre[5][5];

    cout <<"Mostrar arreglo 5x5:" << endl;
    declarar(arre,5);
    mostrar(arre,5);
   /* cout << "****************************************"<< endl;
    cout <<"Mostrar llenado inverso:" << endl;
    llenar_inverso(arre,5);
    mostrar(arre,5);*/
    cout << "**************************************************************************************"<< endl;
    cout <<"Mostrar Diagonal:" << endl;
    mostrar_diag(arre,5);
    cout << "**************************************************************************************"<< endl;
    cout <<"Mostrar Diagonal Secundaria:" << endl;
    mostrar_diagsec(arre,5);
   cout << "**************************************************************************************"<< endl;
    cout <<"Mostrar Diagonal Arriba:" << endl;
    mostrar_diagA(arre,5);
    cout << "**************************************************************************************"<< endl;
    cout <<"Mostrar Diagonal Abajo:" << endl;
    mostrar_diagAB(arre,5);
    cout << "**************************************************************************************"<< endl;
    cout <<"Mostrar Diagonal Secundaria Arriba:" << endl;
    mostrar_diagsecA(arre,5);
    cout << "**************************************************************************************"<< endl;
    cout <<"Mostrar Diagonal Secundaria Abajo:" << endl;
    mostrar_diagsecAB(arre,5);
    cout << "**************************************************************************************"<< endl;
    cout <<"Mostrar Diagonal Primaria giro:" << endl;
    girarprin(arre,5);
     mostrar(arre,5);
    cout << "*************************************************************************************"<< endl;
    cout <<"Mostrar Diagonal Secundaria giro:" << endl;
    girarsec(arre,5);
     mostrar(arre,5);



    return 0;
}

void declarar(int arre[][5], int nr)
{
    int n=1;
    for (int r=0; r<nr; r++)
        for(int c=0; c<5; c++)
        {
            arre[r][c]=n++;
        }

}
void mostrar(int arre[][5], int nr)
{
    for (int r=0; r<nr; r++)
    {
        for(int c=0; c<5; c++)
        {
            cout <<"\t"<<arre[r][c];
        }
        cout << endl;
    }
}
void llenar_inverso(int arre[][5], int nr)
{
    int n=1;
    for (int r=nr-1; r>=0; r--)
        for(int c=5-1; c>=0; c--)
        {
            arre[r][c]=n++;
        }
}
void mostrar_diag(int arre[][5], int nr)
{
    for(int r=0,c=0; r<5; r++, c++)
    {
         cout <<"\t"<<arre[r][c];
    }
    cout <<endl;
}
void mostrar_diagsec(int arre[][5], int nr)
{
      for (int r=0,c=4; r<5; r++,c--)
        {
           cout<<"\t"<<arre[r][c];
        }
        cout << endl;
}
void mostrar_diagA(int arre[][5], int nr)
{
    for(int r=0; r<nr-1;r++)
    {
        for(int c=r+1; c<nr; c++)
        {
        cout<<"\t"<<arre[r][c];
        }

    }
        cout << endl;
}
void mostrar_diagAB(int arre[][5], int nr)
{
     for(int r=1; r<nr;r++)
    {
        for(int c=0; c<r; c++)
        {
        cout<<"\t"<<arre[r][c];
        }

    }
    cout << endl;
}
void mostrar_diagsecA(int arre[][5], int nr)
{
    for(int r=0; r<nr-1;r++)
    {
        for(int c=0; c<nr-1-r; c++)
        {
            cout<<"\t"<<arre[r][c];
        }

    }
    cout << endl;

}

void mostrar_diagsecAB(int arre[][5], int nr)
{
    int aux=5;
         for(int r=0; r<5; r++)
         {
              for(int c=aux; c<5; c++)
              {
                  cout <<"\t"<<arre[r][c];
              }
                aux--;
         }
              cout<<endl;

}
void girarprin(int arre[][5], int nr)
{
    int aux=0;
    for(int r=1; r<4; r++)
        for(int c=0; c<r; c++)
        {
            aux=arre[r][c];
            arre[r][c]=arre[c][r];
            arre[c][r]=aux;
       //cout <<" "<<aux;
        }
    //cout << endl;

}
void girarsec(int arre[][5], int nr)
{
    int aux=0;
    for(int r=0; r<nr-1;r++)
        for(int c=0; c<nr-1-r; c++)
        {
            aux=arre[r][c];
            arre[r][c]=arre[nr-1-c][nr-1-r];
            arre[nr-1-c][nr-1-r]=aux;
        }

}
