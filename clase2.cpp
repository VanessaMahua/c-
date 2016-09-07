#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int num ,i=0,contador;
    srand(time(0));

    while(i<10)
    {

        num = rand() % 6+1;
        cout<<num<<endl;
        if(num==1)
            contador+=1;
        i+=1;
    }
    cout<<("\n\nSALIO 1 -> ")<<contador<<(" veces")<<endl;
    return 0;
}
--------------------------------------------------------
#include <iostream>

using namespace std;

int main()
{
    int n,s=0,producto=1 ,menor;
    cout<<("\nNum?: ")<<endl;
    cin>>n;
    menor=n;
    while(n!=-1)
    {
        s+=n;
        producto*=n;
        if (n<menor)
            menor=n;
        cout<<("Num?")<<endl;
        cin>>n;

    }
    cout<<("\nSUMATORIA ")<<s<<endl;
    cout<<("PRODUCTO ")<<producto<<endl;
    cout<<("MENOR ")<<menor<<endl;


 int n,c=5,end7=0,multi5=0 ;
        cout<<("n?")<<endl;
        cin>>n;
        while (c<n)
        {
            if (c%10==7)
            {
                end7+=1;
            }
            if (c%5==0)
            {
                multi5+=1;
            }

            c+=1;

        }
        cout<<("\nTerminan en 7-> ")<<end7<<endl;
        cout<<("multiplos de 5-> ")<<multi5<<endl;




    return 0;
}
--------------------------------------------------
#include <iostream>

using namespace std;

int main()
{
    /*
    int a,b, operacion;
    bool valor=true;
    while(valor){
    cout<<("\nIngrese el valor de a?")<<endl;
    cin>>a;
    cout<<("Ingrese el valor de b?")<<endl;
    cin>>b;
    cout<<("a y b los quiere...")<<endl;
    cout<<("1) sumar")<<endl;
    cout<<("2) restar")<<endl;
    cout<<("3) multiplicar")<<endl;
    cout<<("4) salir")<<endl;
    cout<<("Ingrese operacion: ");
    cin>>operacion;
    switch(operacion)
    {
        case 1:
            cout<<("umm... La suma de ")<<a<<(" y ")<<b<<(" es ")<<a+b;
            break;
        case 2:
            cout<<("umm... La resta de ")<<a<<(" y ")<<b<<(" es ")<<a-b;
            break;
        case 3:
            cout<<("umm... La multiplicacion de ")<<a<<(" y ")<<b<<(" es ")<<a*b;
            break;
        case 4:
            valor=false;
            break;
        default:
            cout<<("NO EXISTE OPERACION ");
    }
    }
    */

    for(int i=1;i<=15;i++)
    {
        for(int j=1; j<=i;j++)
        {
            cout<<(j);
        }
        cout<<endl;
    }

    int n;
    cout<<("\n\nN?:")<<endl;
    cin>>n;
    cout<<("\n");
    for(int i=1;i<=4;i++)
    {
        for(int j=1; j<=i;j++)
        {
            for(int k=1;k<=j;k++)
            {
                cout<<(k);
            }
            cout<<(" ");

        }
        cout<<endl;
    }


   return 0;
}
------------------------------------------

    long int num,a=1;
    cout<<("n?");
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        cout<<a<<endl;
        a=a*10+i+1;
    }
