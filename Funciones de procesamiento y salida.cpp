#include <iostream>

#include <string>

using namespace std;

int horasseg(int hora,int min,int seg);

void segundoshor(int segundos);

int main()

{

int op,hora,min,seg,segundos;

cout<<"Ingresa la opcion"<<endl;

cout<<"1- horas a segundos"<<endl;

cout<<"2- segundos a horas"<<endl;

 cin>>op;

    if(op==1)
{

        cout<<"Ingresa la hora"<<endl;

        cin>>hora;

        cout<<"Ingresa los minutos"<<endl;

        cin>>min;

        cout<<"Ingresa los segundos"<<endl;

        cin>>seg;

        cout<<"Total de segundos: "<<horasseg(hora,min,seg);

}

    else if(op==2)

{

        cout<<"Ingresa los segundos:";

        cin>>segundos;

        segundoshor(segundos);

}

    else

{

return 0;

}



}

int horasseg(int hora,int min,int seg)

{

    int segundos=0;

    segundos=((hora*60)*60)+(min*60)+seg;



    return segundos;

}

void segundoshor(int segundos)

{

    int hora=0,min=0,seg=0,hr=0;

    hora=(segundos/3600);

    hr+=hora*60;

    min=(segundos/60)-hr;

    seg=segundos-((min*60)+((hora*60)*60));



    cout<<hora<<" Hora"<<endl;

    cout<<min<<" Minutos"<<endl;

    cout<<seg<<" Segundos"<<endl;


}
