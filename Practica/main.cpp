#include <iostream>
#include "Widget.h"
#include <vector>

using namespace std;

////int* retornaMemoria(int a){
////    int *ptr=&a;
////    return ptr;
////}
////
////int Mayor(int a, int b, int c){
////    int mayor=a>b?a>c?a:c:b>c?b:c;
////    return mayor;
////}

int main()
{
////    int a=5;
////    cout<<retornaMemoria(a);

////  vector<Widget *> widgets;
////  Widget wid;//un objeto Widget
////  Gadget gad;//segundo
////  Gizmo giz;//tercer
////  if(true){
////    Gizmo giz2;//4to dentro del ambito IF
////    cout<<wid.getNumInstances()<<endl;
////  }
////  cout<<wid.getNumInstances()<<endl; //
////  widgets.push_back(&wid);
////  widgets.push_back(&gad);
////  widgets.push_back(&giz);
////  for(int i=0; i<widgets.size();i++)
////    do_it(widgets[i]); //
////    cout<<endl;
////    cout<<Mayor(8,9,10);

//    UCSPStudent estudiante1;
//    estudiante1.codigo=123456;
//    char nombre[]="Carlos";
//    estudiante1.nombre=nombre;
//    if(true){
//        UCSPStudent estudiante2=estudiante1;
//        estudiante2.nombre[2]='j';
//        cout<<estudiante1.nombre<<endl;
//    }
    Animal *p,*g;
    p=new Perro("Ramiro");
    g=new Gato("Lancelot");

    cout<< p->hablar()<<endl;
    cout<< g->hablar()<<endl;

    Mascotas m(p);
    m.Insertar(g);
    m.hablar();

    return 0;
}
