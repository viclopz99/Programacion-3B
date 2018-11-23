#include <iostream>
#include <string>
#include <stdlib.h>
int menu();
void comenzar(int tablero[][20],int tam);
void mostrarTablero(int tablero[][20], int tam);
void restablecerTablero(int tablero[][20], int tam);
void mostrarTableroOriginal(int tablero[][20], int tam);
using namespace std;
int main(int argc, const char * argv[]) {
    int opc, tam=20;
    int tablero[20][20]{{0}};
    system("color f2");
    cout << "Grafica por tortuga!\n";

    do {
        opc = menu();

        if (opc==1)
            comenzar(tablero, tam);
        else if (opc==2)
        { //ToDo instrucciones
        }
        else if (opc==3)
            restablecerTablero(tablero,tam);

        else if (opc==0)
            cout<<"nos vemos! :)\n";
        else
            cout<<"opcion no valida\n";
        mostrarTablero(tablero, tam);
        mostrarTableroOriginal(tablero, tam);
    } while (opc!=0);

    return 0;
}
int menu()
{
    int opc;
    cout<<"\tPor favor seleccione una opcion: \n";
    cout<<"\t1.-comenzar\n";
    cout<<"\t2.-Instrucciones\n";
    cout<<"\t3.-Reiniciar\n";
    cout<<"\t0.-Salir\n";
    cin>>opc;
    return opc;
}
void comenzar(int tablero[][20],int tam)
{
    int opc,pasos = 0,pluma=0,girarDerecha = 0;
    int posicionY=0,posicionX=0;
    cout<<"\t\t\tAVISO\t\n";
    cout<<"la primera vez que carga el playground la tortuga estara mirando hacia la derecha -> y la pluma estara hacia arriba\n\n";
    cout<<"\t\t\tComandos\n";
    cout<<"1 = pluma hacia arriba\n"
    <<"2 = pluma hacia abajo\n"
    <<"3 = girar a la derecha\n"
    <<"4 = girar a la izquierda\n"
    <<"5 = avanzar\n"
    <<"6 = salir\n";
    do {

        cin>>opc;
        if (opc==1)
        {
            pluma=0;
            cout<<"pluma hacia arriba\n";
        }
        else if (opc==2)
        {
            pluma=1;
            cout<<"pluma hacia abajo\n";
        }
        else if(opc==3){
            girarDerecha += 1;
            if(girarDerecha==4)
                girarDerecha=0;
            cout<<girarDerecha<<"giraste a la derecha\n";
        }
        else if(opc==4)
        {  girarDerecha -= 1;
        if(girarDerecha<0)
            girarDerecha=3;
        cout<<girarDerecha<<"giraste a la izquierda\n";
        }
        else if (opc==5) {
            cout<<"cuantos pasos quiere dar?\n";
            cin>>pasos;
            if (girarDerecha==0)
                for (int j=posicionX, i=posicionY, k=pasos; k>0; j++,k--) {
                    if (j>=tam-1){
                        k=0;
                        tablero[i][j]=pluma;
                    }
                    tablero[i][j]=pluma;
                    posicionX=j;
                    // cout<<posicionX;
                }
            else if (girarDerecha==1)
                for (int k=pasos,i=posicionY, j=posicionX; k>0; k--,i++) {
                    if (pluma==1){
                    if (i>=tam-1){
                        k=0;
                        tablero[i][j]=pluma;
                    }
                    tablero[i][j]=pluma;
                    posicionY=i;
                    }
                    // cout<<posicionY;
                }
            else if (girarDerecha==2)
                for (int k=posicionX, i=posicionY, j=pasos; j>0; j--,k--) {
                    if (pluma==1){
                    if (k==0){
                        j=0;
                        tablero[i][k]=pluma;
                    }
                    tablero[i][k]=pluma;
                    posicionX=k;
                    cout<<posicionX<<"\n";
                }
                }
            else if (girarDerecha==3)
                for (int k=posicionY,j=posicionX, i=pasos; i>0; i--,k--) {
                    if (pluma==1){
                    if (k==0){
                        i=0;
                        tablero[k][j]=pluma;
                    }
                    tablero[k][j]=pluma;
                    posicionY=k;
                    // cout<<posicionY;
                }
                }

        }

    } while (opc!=6);
}
void mostrarTablero(int tablero[][20], int tam)
{
    for (int i=0; i<tam; i++) {
        for (int j=0; j<tam; j++){
            if (tablero[i][j]==1) {
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}
void mostrarTableroOriginal(int tablero[][20], int tam)
{
        for (int i=0; i<tam; i++) {
          for (int j=0; j<tam; j++)
              cout<<" "<<tablero[i][j];
          cout<<"\n";
          }
}
void restablecerTablero(int tablero[][20],int tam)
{
    for (int i=0; i<tam; i++)
        for (int j=0; j<tam; j++)
            tablero[i][j]=0;
}
