#ifndef WIDGET_H
#define WIDGET_H
#include <iostream>
using namespace std;

////class UCSPStudent{
////public:
////    char *nombre;
////    int codigo;
////    UCSPStudent(){
////        codigo=0;
////        nombre="";
////    }
////    UCSPStudent(UCSPStudent &o){
////    codigo=o.codigo;
////    nombre=new char;
////    for(int i=0;i<'\0';i++)
////        nombre[i]=o.nombre[i];
////    }
////};

////class Widget
////{
////    static int numInstances;
////    public:
////        Widget(){numInstances++;}
////        ~Widget(){numInstances--;}
////        static int getNumInstances(){return numInstances;}
////            virtual int f(){return 1;}
////};
////
////int Widget::numInstances=0;
////
////class Gadget: public    Widget{
////    public:
////         virtual int f(){return 2;}
////};
////
////class Gizmo: public    Widget{
////    public:
////         virtual int f(){return 3;}
////};
////
////void do_it(Widget *w){
////    cout<<w->f()<<" ";
////}
////
////class ArrayWidgets{
////    Widget *items;
////    int tam;
////    void resize(int tam){this->tam=tam;}
////public:
////    ArrayWidgets(int tam){//constructor1
////        this->tam=tam;
////        items=new Widget[tam];
////    }
////
////    ArrayWidgets(const Widget wids[], const int tam){//constructor2
////        items=new Widget[tam];
////        for(int i=0;i<tam;i++)
////            items[i]=wids[i];
////        this->tam=tam;
////        delete []wids;
////    }
////    ArrayWidgets(const ArrayWidgets &arr){//constructor copia
////        tam=arr.tam;
////        items=new Widget[tam];
////        for(int i=0;i<tam;i++)
////            items[i]=arr.items[i];
////    }
////    ~ArrayWidgets(){
////        delete []items;
////    }
////    int getTam(){
////        return tam;
////    }
////    void push_back(const Widget &w){
////        Widget *nuevo=new Widget[tam+1];
////        for(int i=0;i<tam;i++)
////            nuevo[i]=items[i];
////        nuevo[tam]=w;
////        tam++;
////        delete []items;
////        items=nuevo;
////    }
////
////    void insert(const int pos, const Widget &w){
////        Widget *nuevo=new Widget [tam+1];
////        for(int i=0;i<pos;i++)
////            nuevo[i]=items[i];
////        nuevo[pos]=w;
////        for(int i=pos;i<tam;i++)
////            nuevo[i+1]=items[i];
////        tam++;
////        delete []items;
////        items=nuevo;
////    }
////
////    void remove(const int pos){
////        Widget *nuevo=new Widget[tam-1];
////        for(int i=0;i<pos;i++)
////            nuevo[i]=items[i];
////        for(int i=pos;i<tam-1;i++)
////            nuevo[i]=items[i+1];
////        tam--;
////        delete []items;
////        items=nuevo;
////    }
////};

class Animal{
char *nombre;
int patas;
public:
    Animal(char *n){
        nombre=n;
        patas=4;
    }
    virtual char *hablar();
};

class Perro:public Animal{
public:
    Perro(char *n):Animal(n){}
    char *hablar(){
        return "wuff wuff";
    }
};

class Gato:public Animal{
public:
    Gato(char *n):Animal(n){}
    char *hablar(){
        return "miau";
    }
};

class Mascotas{
Animal **an;
int tam=1;
public:
    Mascotas(Animal *a){
        an=new Animal*[tam];
        an[0]=a;
    }
    void Insertar(Animal *a){
        Animal **nuevo=new Animal*[tam+1];
        for(int i=0;i<tam;i++)
            nuevo[i]=an[i];
        nuevo[tam]=a;
        delete []an;
        an=nuevo;
    }
    void hablar(){
        for(int i=0;i<tam;i++)
            cout<<an[i]->hablar()<<endl;
    }
};

#endif // WIDGET_H
