#include <iostream>
#include <stdio.h>

using namespace std;

class persona


{
    //char cod[10];
    int cod;
    char nom[40];
    int usuario[100];
    int pos=0;

public:
    void llenar_data();
    void imprimir_data();
    //char* get_codigo();
    int get_codigo();
    int* doc_user();
    int get_pos();
    void llebar();
    void devolver();
};
void persona::llenar_data()
{
    cout<<"Codigo? "<<endl;
    cin>>cod;
    cout<<"Nommbre? "<<endl;
    cin>>nom;
}
void persona::imprimir_data()
{
    cout<<"Codigo: "<<cod<<endl;
    cout<<"Nommbre: "<<nom<<endl;
}
int persona::get_codigo(){
    return cod;
}
int* persona::doc_user(){
    return usuario;
}
int persona::get_pos(){
    return pos;
}
void persona::llebar(){
    pos+=1;
}
void persona::devolver(){
    if (pos>=1) pos-=1;
}
class alumno:persona
{
    int cred;
public:
    void llenar_data();
    void imprimir_data();
    int get_codigo();
    int* doc_user();
    int get_pos();
    void llebar();
    void devolver();
};
void alumno::llenar_data()
{
    persona::llenar_data();
    cout<<"Creditos? "<<endl;
    cin>>cred;
}
void alumno::imprimir_data()
{
    persona::imprimir_data();
    cout<<"Creditos matriculados: "<<cred<<endl;
}
int alumno::get_codigo(){
    return persona::get_codigo();
}
int* alumno::doc_user(){
    return persona::doc_user();
}
int alumno::get_pos(){
    return persona::get_pos();
}
void alumno::llebar(){
    persona::llebar();
}
void alumno::devolver(){
    persona::devolver();
}
class profesor:persona
{
    int nro_horas;
public:
    void llenar_data();
    void imprimir_data();
    int get_codigo();
    int* doc_user();
    int get_pos();
    void llebar();
    void devolver();
};
void profesor::llenar_data()
{
    persona::llenar_data();
    cout<<"Nro Horas? "<<endl;
    cin>>nro_horas;
}
void profesor::imprimir_data()
{
    persona::imprimir_data();
    cout<<"Nro Horas: "<<nro_horas<<endl;
}
int profesor::get_codigo(){
    return persona::get_codigo();
}
int* profesor::doc_user(){
    return persona::doc_user();
}
int profesor::get_pos(){
    return persona::get_pos();
}
void profesor::llebar(){
    persona::llebar();
}
void profesor::devolver(){
    persona::devolver();
}
class documento
{
    //char cod[10];//int cod
    int cod;
    char titulo[60];
public:
    void llenar_data();
    void imprimir_data();
    //char* get_documento();
    int get_documento();
};
void documento::llenar_data()
{
    cout<<"Codigo? "<<endl;
    cin>>cod;
    cout<<"Titulo? "<<endl;
    cin>>titulo;
}
void documento::imprimir_data()
{
    cout<<"Codigo: "<<cod<<endl;
    cout<<"Nommbre: "<<titulo<<endl;
}
int documento::get_documento(){
    return cod;
}
class libro:documento
{
    int cantidad_libro;
    bool disponible=false;
public:
    void llenar_data();
    void imprimir_data();
    void add_data();
    void quitar_data();
    int get_documento();
};
void libro::llenar_data()
{
    documento::llenar_data();
    cout<<"Cantidad "<<endl;
    cin>>cantidad_libro;
    if (cantidad_libro>0){
        disponible=true;
    }
}
void libro::imprimir_data()
{
    documento::imprimir_data();
    cout<<"Cantidad: "<<cantidad_libro<<endl;
}
void libro::quitar_data(){
    cantidad_libro-=1;
    if (cantidad_libro<=0){
        disponible=false;
    }
}
void libro::add_data(){
    cantidad_libro+=1;
    if (cantidad_libro<=0){
        disponible=false;
    }
}
int libro::get_documento(){
    return documento::get_documento();
}

class tesis:documento
{
    int cantidad_tesis;
    bool disponible=false;
public:
    void llenar_data();
    void imprimir_data();
    void add_data();
    void quitar_data();
    int get_documento();
};
void tesis::llenar_data()
{
    documento::llenar_data();
    cout<<"Cantidad: "<<endl;
    cin>>cantidad_tesis;
    if (cantidad_tesis>0){
        disponible=true;
    }
}
void tesis::imprimir_data()
{
    documento::imprimir_data();
    cout<<"Cantidad "<<cantidad_tesis<<endl;
}
void tesis::quitar_data(){
    cantidad_tesis-=1;
    if (cantidad_tesis<=0){
        disponible=false;
    }
}
void tesis::add_data(){
    cantidad_tesis+=1;
    if (cantidad_tesis<=0){
        disponible=false;
    }
}
int tesis::get_documento(){
    return documento::get_documento();
}

class sistema
{
    int actalumno, actprofe;
    int actlibro, acttesis;
    alumno *listaalumno[100];
    profesor *listaprofe[100];
    /*listas para  mis documentos*/
    libro *listalibros[100];
    tesis *listatesis[100];
public:
    sistema();
    void ingresar(int tipo);
    void listar(int tipo);
    void prestar(int, int, int, int);
    void doc_prestados (int, int);
    void regresar (int, int, int, int);
    void devolver(int,int,int,int);
};
sistema::sistema()
{
    for(int i=0;i<100;i++)
    {
        listaalumno[i]=0;
        listaprofe[i]=0;
        listalibros[i]=0;
        listatesis[i]=0;
    }
    actalumno=actprofe=actlibro=acttesis=-1;
}
void sistema::ingresar(int tipo)
{
    switch (tipo){
        case 1:
                listaalumno[++actalumno]=new alumno;
                listaalumno[actalumno]->llenar_data();
                break;
        case 2:
                listaprofe[++actprofe]=new profesor;
                listaprofe[actprofe]->llenar_data();
                break;
        case 3:
                listalibros[++actlibro]=new libro;
                listalibros[actlibro]->llenar_data();
                break;
        case 4:
                listatesis[++acttesis]=new tesis;
                listatesis[acttesis]->llenar_data();
                break;
    }
}
void sistema::listar(int tipo){
    switch (tipo){
        case 1:
                for(int i=0;i<=actalumno;i++){
                    listaalumno[i]->imprimir_data();}
                break;
        case 2:
                for(int i=0;i<=actprofe;i++){
                    listaprofe[i]->imprimir_data();}
                break;
        case 3:
                for(int i=0;i<=actlibro;i++){
                    listalibros[i]->imprimir_data();}
                break;
        case 4:
                for(int i=0;i<=acttesis;i++){
                    listatesis[i]->imprimir_data();}
                break;
    }
}
void sistema::prestar(int user, int doc, int id_user, int id_doc){
    bool prestar=false;
        if (user==1){
            for (int i=0;i<=actalumno;i++){
                if (listaalumno[i]->get_codigo()==id_user){
                    cout<<"Usuario encontrado"<<endl;
                    prestar=true;
                    break;
                }
            }
        }
        else{
            if (user==2){
            for (int i=0;i<=actprofe;i++){
                if (listaprofe[i]->get_codigo()==id_user){
                    cout<<"Usuario encontrado"<<endl;
                    prestar=true;
                    break;
                }
            }}
        }
    if (prestar==false) cout<<"Usuario no encontrado, intente denuevo :3"<<endl;
    else{
        if (doc==1){
            for (int i=0;i<=actlibro;i++){
                if (listalibros[i]->get_documento()==id_doc){
                    cout<<"Libro encontrado"<<endl;
                    listalibros[i]->quitar_data();
                    if (user==1){
                        for (int j=0;j<=actalumno;j++){
                            if (listaalumno[j]->get_codigo()==id_user){
                                listaalumno[j]->doc_user()[listaalumno[j]->get_pos()]=id_doc;
                                listaalumno[j]->llebar();
                                break;
                            }
                        }
                    }
                    else{
                        if (user==2){
                        for (int j=0;j<=actprofe;j++){
                            if (listaprofe[j]->get_codigo()==id_user){
                                listaprofe[j]->doc_user()[listaprofe[j]->get_pos()]=id_doc;
                                listaprofe[j]->llebar();
                                break;
                            }
                        }}
                    }
                    break;
                }
            }
        }
        else{
            if (doc==2){
            for (int i=0;i<=acttesis;i++){
                if (listatesis[i]->get_documento()==id_doc){
                    cout<<"Tesis encontrada"<<endl;
                    listatesis[i]->quitar_data();
                    if (user==1){
                        for (int j=0;j<=actalumno;j++){
                            if (listaalumno[j]->get_codigo()==id_user){
                                listaalumno[j]->doc_user()[listaalumno[j]->get_pos()]=id_doc;
                                listaalumno[j]->llebar();
                                break;
                            }
                        }
                    }
                    else{
                        if (user==2){
                        for (int j=0;j<=actprofe;j++){
                            if (listaprofe[j]->get_codigo()==id_user){
                                listaprofe[j]->doc_user()[listaprofe[j]->get_pos()]=id_doc;
                                listaprofe[j]->llebar();
                                break;
                            }
                        }}
                    }
                    break;
                }
            }
        }
        }
}
}

void sistema::doc_prestados(int tipo_user, int id_user){
    if (tipo_user==1){
            for (int i=0;i<=actalumno;i++){
                if (listaalumno[i]->get_codigo()==id_user){
                    cout<<"Usuario encontrado - Documentos Prestados "<<endl;
                    for (int z=0;z<listaalumno[i]->get_pos();z++){
                    cout<<listaalumno[i]->doc_user()[z]<<endl;}
                    break;
                }
            }
        }
        else
        {
            if (tipo_user==2)
            {
            for (int i=0;i<=actprofe;i++)
            {
                if (listaprofe[i]->get_codigo()==id_user)
                {
                    cout<<"Usuario encontrado"<<endl;
                    for (int z=0;z<listaprofe[i]->get_pos();z++)
                    {
                        cout<<listaprofe[i]->doc_user()[z]<<endl;
                    }
                    break;
                }
            }
            }
        }

}
void sistema::devolver(int user,int doc,int id_user,int id_doc)
{
    bool prestar=false;
        if (user==1){
            for (int i=0;i<=actalumno;i++){
                if (listaalumno[i]->get_codigo()==id_user){
                    cout<<"Usuario encontrado"<<endl;
                    prestar=true;
                    break;
                }
            }
        }
        else{
            if (user==2){
            for (int i=0;i<=actprofe;i++){
                if (listaprofe[i]->get_codigo()==id_user){
                    cout<<"Usuario encontrado"<<endl;
                    prestar=true;
                    break;
                }
            }}
        }
    if (prestar==false) cout<<"Usuario no encontrado, intente denuevo :3"<<endl;
    else{
        if (doc==1){
            for (int i=0;i<=actlibro;i++){
                if (listalibros[i]->get_documento()==id_doc){
                    cout<<"Libro encontrado"<<endl;
                    listalibros[i]->add_data();
                    if (user==1){
                        for (int j=0;j<=actalumno;j++){
                            if (listaalumno[j]->get_codigo()==id_user){
                                listaalumno[j]->doc_user()[listaalumno[j]->get_pos()]=id_doc;
                                listaalumno[j]->llebar();
                                break;
                            }
                        }
                    }
                    else{
                        if (user==2){
                        for (int j=0;j<=actprofe;j++){
                            if (listaprofe[j]->get_codigo()==id_user){
                                listaprofe[j]->doc_user()[listaprofe[j]->get_pos()]=id_doc;
                                listaprofe[j]->llebar();
                                break;
                            }
                        }}
                    }
                    break;
                }
            }
        }
        else{
            if (doc==2){
            for (int i=0;i<=acttesis;i++){
                if (listatesis[i]->get_documento()==id_doc){
                    cout<<"Tesis encontrada"<<endl;
                    listatesis[i]->add_data();
                    if (user==1){
                        for (int j=0;j<=actalumno;j++){
                            if (listaalumno[j]->get_codigo()==id_user){
                                listaalumno[j]->doc_user()[listaalumno[j]->get_pos()]=id_doc;
                                listaalumno[j]->llebar();
                                break;
                            }
                        }
                    }
                    else{
                        if (user==2){
                        for (int j=0;j<=actprofe;j++){
                            if (listaprofe[j]->get_codigo()==id_user){
                                listaprofe[j]->doc_user()[listaprofe[j]->get_pos()]=id_doc;
                                listaprofe[j]->llebar();
                                break;
                            }
                        }}
                    }
                    break;
                }
            }
        }
        }
}
}

int main()
{
    int men,smen;
    int tipo_user,tipo_doc;
    /*char cod_persona[10];
    char cod_documento[10];*/
    int cod_persona;
    int cod_documento;
    sistema s;
    for(;;)
    {
        cout<<"(1) Ingresar datos"<<endl;
        cout<<"(2) Mostrar datos"<<endl;
        cout<<"(3) Prestar Documento"<<endl;
        cout<<"(4) Devolver Documento"<<endl;
        cout<<"(5) Salir"<<endl;
        cin>>men;
        switch(men)
        {
            case 1:
                    cout<<"(1) Ingresar Alumno"<<endl;
                    cout<<"(2) Ingresar Profesor"<<endl;
                    cout<<"(3) Ingresar Libro"<<endl;
                    cout<<"(4) Ingresar Tesis"<<endl;
                    cout<<"(5) Regresar"<<endl;
                    cin>>smen;
                    s.ingresar(smen);
                    break;
            case 2:
                    cout<<"(1) Listar Alumnos"<<endl;
                    cout<<"(2) Listar Profesores"<<endl;
                    cout<<"(3) Listar Libros"<<endl;
                    cout<<"(4) Listar Tesis"<<endl;
                    cout<<"(5) Regresar"<<endl;
                    cin>>smen;
                    s.listar(smen);
                    break;
            case 3:
                    cout<<"(1) Si es Alumno"<<endl;
                    cout<<"(2) Si es Profesor"<<endl;
                    cin>>tipo_user;
                    cout<<"Ingrese codigo"<<endl;
                    cin>>cod_persona;
                    cout<<"(1) Si es Libro"<<endl;
                    cout<<"(2) Si es Tesis"<<endl;
                    cin>>tipo_doc;
                    cout<<"Ingrese codigo Documento"<<endl;
                    cin>>cod_documento;
                    s.prestar(tipo_user,tipo_doc,cod_persona,cod_documento);
                    cout<<"doc_prest  "<<endl;
                    s.doc_prestados(tipo_user,cod_persona);
                    break;

            case 4:
                    cout<<"(1) Si es Alumno"<<endl;
                    cout<<"(2) Si es Profesor"<<endl;
                    cin>>tipo_user;
                    cout<<"Ingrese codigo"<<endl;
                    cin>>cod_persona;
                    cout<<"(1) Libro"<<endl;
                    cout<<"(2) Tesis"<<endl;
                    cin>>tipo_doc;
                    cout<<"Ingrese codigo Documento"<<endl;
                    cin>>cod_documento;
                    s.devolver(tipo_user,tipo_doc,cod_persona,cod_documento);
                    cout<<"doc_devuelto  "<<endl;
                    break;

            case 5:
                    cout<<"Gracias por usar el sistema..."<<endl;
        }
    }
    return 0;
}
