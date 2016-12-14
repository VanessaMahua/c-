
#include <iostream>
using namespace std;
class rectangulo
{
    float base , altura;
public:
    void setbase(float);
    void setaltura(float);
    float getbase();
    float getaltura();
    float area();
    float perimetro();
};
void rectangulo ::setbase(float x)
{
    base =x;
}
void rectangulo :: setaltura(float x)
{
    altura=x;
}
float rectangulo:: getbase()
{
    return base;
}
float rectangulo :: getaltura()
{
    return altura;
}
float rectangulo :: area()
{
    return base*altura;
}
float rectangulo::perimetro()
{
    return 2*(base+ altura);
}
int main ()
{
    rectangulo r1,r2;
    r1.setbase(3.5);
    r1.setaltura(2);
    cout<<("Base de r1 = ")<< r1.getbase()<<endl;
    cout<<("Altura r1 = ")<<r1.getaltura()<<endl;
    cout<<("Area de r1 = ")<<r1.area()<<endl;
    cout<<("Perimetro de r1 = ")<< r1.area()<<endl;
    cout<<("Perimetro de r1 = ")<<r1.perimetro()<<endl;
    r2.setbase(2);
    r2.setaltura(4);
    cout<<("Area de r2 = ")<<r2.area()<<endl;
    cout<<("Perimetro de r2 = ")<<r2.perimetro();
    return 0;

}
// entero n1, n2,n5 -> n1.sumar(n2)=n5
class entero
{
    int valor;
    public :
    void setvalor(int);
    int getvalor();
    entero sumar(entero);
    entero restar(entero);
    entero cambiarsigno();
};
 void entero:: setvalor(int x)
{
    valor=x;
}
int entero ::  getvalor()
{
    return valor;
}
entero entero :: sumar(entero x)
{
    entero ns;
    ns.setvalor(valor + x.getvalor());
    return ns;
}
entero entero :: restar(entero x)
{
    entero ns;
    ns.setvalor(valor - x.getvalor());
    return ns;
}
entero entero :: cambiarsigno()
{
    entero ns;
    ns.setvalor(-valor);
    return ns;
}
int main()
{
    entero n1, n2,ns ;
    n1.setvalor(1);
    n2.setvalor(2);
    ns=n1.sumar(n2);
    //cout<<ns.getvalor();
    cout<<endl;
    ns=n1.restar(n2);
    //cout<<ns.getvalor();
    ns=n1.cambiarsigno();
    cout<<ns.getvalor();
    return 0;
}

