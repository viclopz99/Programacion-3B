#include <iostream>
#include <string>
using namespace std;

int potencia (int base, int potencia);
int fact (int n);
float cos(int x);
float sen(int x);
float log (int x);

int main()
{
    int res,total,x;

    do{
        cout <<".....Menu....."<< endl;
      
        cout <<"1.-LOGARITMO N." << endl;
      
        cout <<"2.-SENO." << endl;  
      
        cout <<"3.-COSENO." << endl;
      
        cout <<"0.-SALIR"<< endl;
      
        cin >> res;

        if(res==1)
        {
            cout << "Ingresa el Valor de X:" << endl;
            cin >> x;
            cout << log(x) << endl;
        }
        else if(res==2)
        {
             cout<<"Ingresa el Angulo:" << endl;
            cin>>x;
            cout << sen(x) << endl;
        }else if(res==3)
        {
            cout << "Ingresa el Angulo:" << endl;
            cin >> x;
            cout << cos(x) << endl;
        }
    }
    while(!(res==0));
}
    int potencia (int base, int expo)
{
    int pot=1;

    for(int i=1;i<=expo;i++)
    {
        pot*=base;
    }
    return (pot);
}

    int fact (int n)
{
    int factorial=1;

    for(int i=1;i<=n;i++)
    {
        factorial*=i;
    }

    return (factorial);
}
    float log (int x)
{
    float suma=0,total=0;

    total=x-1;

    total/=x;

    for(int i=1;i<=x;i++)
    {

        suma+=(float)1/i*(potencia(total,i));
    }

    return(suma);

}

    float cos(int x)
{
    float coseno1=1;

            if(x==1)
            {

              return((float)potencia(1,2)/fact(2));

              coseno1=1;
            }
            else if(x==0)
            {
                return(coseno1);

            }
            else if(x>=2)
            {
             int i,j;

             int n=1;

             j=x;

             j=(j*2)+2;

                for(i=2;i<=j;i=i+2)
                 {
                 n*=-1;

             cout << coseno1 << endl;

        coseno1+=(n*(float)potencia(x,i)/fact(i));



                 }
         return(coseno1);

         coseno1=1;

            }

}

    float sen(int x)
{
    float seno1=x;
            if(x==1)
            {

              return((float)potencia(1,3)/fact(3));

              seno1=1;
            }
            else if(x==0)
            {
                return(seno1);

            }
            else if(x>=2)
            {
             int i,j;

             int n=1;

             j=x;

             j=(j*2)+2;

                for(i=1;i<=j;i=i+2)
                 {

                         n*=-1;

                         cout << seno1<< endl;

                         seno1+=(n*(float)potencia(x,i)/fact(i));



                 }
         return(seno1);

         seno1=x;

            }

}
