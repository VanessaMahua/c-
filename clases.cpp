
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

    return sumar(x.cambiarsigno());
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
    cout<<ns.getvalor();
    ns=n1.cambiarsigno();
    //cout<<ns.getvalor();
    return 0;
}


#include <sstream> // bafern convierte el valor entero en string
#include <iostream>

using namespace std;
class fraccion
{
    int num , den;
    public:
        fraccion (int,int);
        fraccion sumar (fraccion);
        string mostrar();
        void simplificar(int, int);
        int getnum();
        int getden();

};
int fraccion:: getnum()
{
    return num;
}
int  fraccion:: getden()
{
    return den;
}
string fraccion:: mostrar()
{
    stringstream n ,d;
    n<< num;
    d<<den;
    return n.str() + "/" + d.str();
}
fraccion:: fraccion(int x, int y)
{
    num=x;
    den=y;
}

fraccion fraccion:: sumar (fraccion f)
{
    int n,d;
    n= num*f.den + den*f.num;
    d=den*f.den;
    fraccion fsuma(n,d);
    return fsuma;
}
void fraccion :: simplificar(int num ,int den)
{

    if(num<den)
    {
        for(int i=num; i>0 ; i--)
        {
            if(num%i ==0 && den%i==0)
            {
                num=num;
                den=den;

            }
        }
    }
    else
    {
         for(int i=den; i>0 ; i--)
        {
            if(num%i ==0 && den%i==0)
            {
                num=num/i;
                //cout<<num;
                //cout<<endl;
                den=den/i;


            }
        }
    }
    cout <<num << "/"<< den;
}

int main()
{
    fraccion f1(3,4),f2(5,3),f3(0,1),f4(12,4),f5(10,2);
    cout<<"fraccion1 = "<<f1.mostrar()<<endl;
    cout<<"fraccion2 = "<<f2.mostrar()<<endl;
    f3=f1.sumar(f2);

    cout <<"SUMA "<<f3.mostrar()<<endl;
    f3.simplificar(f3.getnum(),f3.getden());
    cout<<endl;
   f4.simplificar(f4.getnum(),f4.getden());
   cout<<endl;
    f5.simplificar(f5.getnum(),f5.getden());
}

=================================================================
#include <iostream>

using namespace std;

class Persona
{
    string dni, nombre;
    int edad;
public:
    Persona(string,string,int);
    Persona();
    void setDni(string);
    void setNombre(string);
    void setEdad(string);
    string getDni();
    string getNombre();
    int getEdad();
    void mostrarDatos();
    void ingresarDatos();
    bool buscar( Persona *listaPersonas[], string dni);
    };

    Persona::Persona()
    {
        dni="";
        nombre="";
        edad=0;
    }
    Persona::Persona(string dni,string n,int e)
    {
        dni=dni;
        nombre=n;
        edad=e;
    }
    string Persona::getNombre()
    {
        return nombre;
    }
    string Persona::getDni()
    {
        return dni;
    }
    int Persona::getEdad()
    {
         return edad;
    }
void Persona::mostrarDatos()
{
    cout<<"Mi nombre es "<<getNombre()<<" y tengo "<<getEdad()<<" anhos"<<endl;
}
void Persona::ingresarDatos()
{
    cout<<"Nombre?";cin>>nombre;
    cout<<"Dni?";cin>>dni;
    cout<<"Edad?";cin>>edad;
}
bool  buscar( Persona *listaPersonas[], string dni)
{

    for (int i=0;i<3;i++)
    {

        if ( dni == listaPersonas[i]->getDni())
        {
            listaPersonas[i]->mostrarDatos();
            return 1;
        }
        else
            cout<<"plop";
            return 0;
    }
}
int main()
{
    string buscar_dni;
    Persona p1("40405050","Luis Perez",21);
    p1.mostrarDatos();
    Persona *listaPersonas[10];
    for(int i=0;i<3;i++)
        listaPersonas[i]=new Persona();
    for(int i=0;i<3;i++)
        listaPersonas[i]->ingresarDatos();
    for(int i=0;i<3;i++)
        listaPersonas[i]->mostrarDatos();

    cout<<"Dni a buscar?";cin>>buscar_dni;
    buscar(listaPersonas,  buscar_dni);


    return 0;
}




