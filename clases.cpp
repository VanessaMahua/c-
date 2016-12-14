
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
