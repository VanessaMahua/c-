#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int f,c ;
    cout << "Cantidad de grados centigrados" << endl;
    cin>>c;
    f=9*c/5+32;
    cout<<"Grados Farenheit="<<f<<endl;
    
    =======================================================
    int n,s,modulo;
    cout << "n?" << endl;
    cin>>n;
    s=n%10+n/10%10+n/100%10+n/1000;
    cout<<s;
    ========================================================
    float n;
    cout << "n?" << endl;
    cin>>n;
    if (int(n)%5==0)
        n=pow(n,3);

    if (int(n)%10==7)
        n=sqrt(n);
    cout<<n;
    
    float a,b,c;
    cout << "a?" << endl;
    cin>>a;
    cout << "b?" << endl;
    cin>>b;
    cout << "c?" << endl;
    cin>>c;
    if (a=b&& b==c)
        cout<<"Iguales";
    else
    {
        if (a>=b && a>=c )
            if (b>=c)
                cout<<b;
            else
                cout<<c;
        if (b>=a && b>=c  )
            if(a>=c)
                cout<<a;
            else
                cout<<c;
        if (c>=a &&  c>=b )
            if (a>=b)
                cout<<a;
            else
                cout<<b;

    if ((a<=b && a>=c)|| (a<=c && a>=b))
        cout<<a;
    else
        if( (b<=a && b>=c)||(b<=c && b>=a))
            cout<<b;
        else
            cout<<c;
    

    }
    
    return 0;
    
    


}
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    float n1,n2,n3,n4,n5;
    cout << "n?" << endl;
    cin>>n1>>n2>>n3>>n4>>n5;
    int menor=9, c=0;
    if (n1<=menor)
        menor=n1;
    if(n2<=menor)
        menor=n2;
    if(n3<=menor)
        menor=n3;
    if(n4<=menor)
        menor=n4;
    if(n5<=menor)
        menor=n5;
    cout<<"el menor es"<<menor;
    if (menor==n1)
        cout<<"primera posicion";
    if (menor==n2)
        cout<<"2 posicion";
    if (menor==n3)
        cout<<"3 posicion";
    if (menor==n4)
        cout<<"4 posicion";
    if (menor==n5)
        cout<<"5 posicion";



    return 0;

}


============================================================
