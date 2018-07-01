#ifndef WIDGET_H
#define WIDGET_H
#include <iostream>
using namespace std;

class Widget
{
    static int numInstances;
    public:
        Widget(){numInstances++;}
        ~Widget(){numInstances--;}
        static int getNumInstances(){return numInstances;}
            virtual int f(){return 1;}
};

int Widget::numInstances=0;

class Gadget: public    Widget{
    public:
         virtual int f(){return 2;}
};

class Gizmo: public    Widget{
    public:
         virtual int f(){return 3;}
};

void do_it(Widget *w){
    cout<<w->f()<<" ";
}

class ArrayWidgets{
    Widget *items;
    int tam;
    void resize(int tam){this->tam=tam;}
public:
    ArrayWidgets(int tam){//constructor1
        this->tam=tam;
        items=new Widget[tam];
    }
    ArrayWidgets(const Widget wids[], const int tam){//constructor2
        Widget *nuevo=new Widget[tam];
        for(int i=0;i<tam;i++)
            nuevo[i]=wids[i];
        this->tam=tam;
    }
    ArrayWidgets(const ArrayWidgets &arr){//constructor copia
        items=new Widget[arr.tam];
        tam=arr.tam;
        for(int i=0;i<tam;i++)
            items[i]=arr.items[i];
    }
    ~ArrayWidgets(){
        delete []items;
    }
    int getTam(){
        return tam;
    }
    void push_back(const Widget &w){
        Widget *nuevo=new Widget[tam+1];
        for(int i=0;i<tam;i++)
            nuevo[i]=items[i];
        nuevo[tam]=w;
        tam++;
        delete[]items;
        items=nuevo;
    }

    void insert(const int pos, const Widget &w){
        Widget *nuevo=new Widget[tam+1];
        for(int i=0;i<pos;i++)
            nuevo[i]=items[i];
        nuevo[pos]=w;
        for(int i=pos;i<tam;i++)
            nuevo[i+1]=items[i];
        tam++;
        delete []items;
        items=nuevo;
    }

    void remove(const int pos){
        int p=pos;
        Widget *nuevo=new Widget[tam-1];
        for(int i=0;i<p;i++)
            nuevo[i]=items[i];
        for(;p<tam;p++)
            nuevo[p]=items[p+1];
        tam--;
        delete []items;
        items=nuevo;
    }
};



#endif // WIDGET_H
