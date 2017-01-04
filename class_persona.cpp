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
int main()
{
    Persona p1("40405050","Luis Perez",21);
    p1.mostrarDatos();
    Persona *listaPersonas[10];
    for(int i=0;i<3;i++)
        listaPersonas[i]=new Persona();
    for(int i=0;i<3;i++)
        listaPersonas[i]->ingresarDatos();
    for(int i=0;i<3;i++)
        listaPersonas[i]->mostrarDatos();
    return 0;
}

