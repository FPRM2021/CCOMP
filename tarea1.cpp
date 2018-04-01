#include <iostream>

using namespace std;

int main()
{
   /*primer ejercicio*/
    /*int a;
    cout<<"Introduzca su edad: ";
    cin>>a;using namespace std;
    if (a<18){
        cout<<"es menor de edad";
        }else{
            cout<<"es mayor de edad";
        }*/
    /*segundo ejercicio*/
    /*int n;
    cout<<"introduzca un numero ";
    cin>>n;
    for (int i=1; i<=n; i=i+1){
        if (i!=n){
            cout<<i<<",";
            }else{
            cout<<i;
            }
    }*/
    /*tercer ejercicio*/
    /*int a;
    int b;
    int c;
    cout<<"introduzca 3 numeros: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if (a<b and a<c){
        cout<<a<<" es el menor"<<endl;
    }else if(b<a and b<c){
        cout<<b<<" es el menor"<<endl;
    }else{
        cout<<c<<" es el menor"<<endl;
    }
    if (a>b and a>c){
        cout<<a<<" es el mayor"<<endl;
    }else if(b>a and b>c){
        cout<<b<<" es el mayor"<<endl;
    }else{
        cout<<c<<" es el mayor"<<endl;
    }
    int promedio=(a+b+c)/3;
    cout<<"el promedio es: "<<promedio;*/
    /*cuarto ejercicio*/
    /*int a,b;
    cout<<"introduzca dos numeros: "<<endl;
    cin>>a;
    cin>>b;
    if(!(a%2)){
        cout<<"a es multiplo de dos"<<endl;
        }else{
            cout<<"a no es multiplo de dos"<<endl;
            }
    if(!(b%2)){
        cout<<"b es multiplo de dos"<<endl;
        }else{
            cout<<"b no es multiplo de dos"<<endl;
            }
    if(!(a%b)){
        cout<<"a es multiplo de b"<<endl;
        }else{
            cout<<"a no es multiplo de b"<<endl;
            }
    if (a*a==b){
        cout<<"\"a\" al cuadrado es igual a \"b\"";
        }else{
            cout<<"\"a\" al cuadrado no es igual a \"b\"";
            }*/
    /*quinto ejercicio*/
    /*int a;
    int contador=0;
    cout<<"introduzca un numero: "<<endl;
    cin>>a;
    for (int i=1; i<(a+1); i+=1){
            if (a%i==0){
                contador+=1;
        }
    }
    if (contador!=2){
        cout<<a<<" no es primo"<<endl;
        }else{
            cout<<a<<" es primo"<<endl;
            }*/
    /*sexto ejercicio*/
    int a;
    cout<<"introduzca un numero: "<<endl;
    cin>>a;
    for(int e=2; e<a; e+=1){
        int contador=1;//empieza siempre con 1(como si fuera verdadero)
        for (int i=2; i<e; i+=1){//for (int i=2; i<=e; i+=1) asi lo tenias y el i siempre iba hasta el numero e (osea hacias la verificacion de a hasta a cuando deberia ser de a hasta a-1)
            if (e%i==0){
                contador=0;//(no le sumes uno solo asignale el valor 0)
                break;
            }
        }
        if (contador==1){
            cout<<e<<endl;
        }else{
            contador=1;
                }
    }
    return 0;
}
