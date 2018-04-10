#include <iostream>

using namespace std;
/*primer ejercicio*/
/*bool mayordeedad(int a){
    return (a>=18);
}*/
/*segundo ejercicio*/

/*int sucesion (int n){
    for (int i=1; i<=n; i++){
        if (i!=n){
            cout<<i<<",";
            }else{
            cout<<i;
            }
    }
}/*

    /*tercer ejercicio*/
/*int mayMenProm(int a, int b, int c, int &mayor, int &menor, float &prom){
    menor=(a<b)?a:b;
    menor=(menor<c?menor:c);
    mayor=(a>b)?a:b;
    mayor=(mayor>c?mayor:c);
    prom=(a+b+c)/3;
}*/
    /*cuarto ejercicio*/
/*int multiplodedosydeb (int a,int b){
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
            }
}*/
    /*quinto ejercicio*/
    bool esprimo(int a){
    int contador=0;
    for (int i=1; i<=a; i++){
            if (!(a%i)){
                contador++;
        }
    }
    if (contador!=2){
        return false;
            }
            return true;
    }
    /*sexto ejercicio*/
    int primosmenores(int a){
    for(int e=2; e<a; e++){
        int contador=1;
        for (int i=2; i<e; i++){
            if (!(e%i)){
                contador=0;
                break;
            }
        }
        if (contador==1){
            cout<<e<<endl;
            }else{
            contador=1;
            }
    }
    }
    /*septimo ejercicio*/
    /*int a;
    int b;
    cin>>a;
    for(int i=10000;i>=1;i=i/10){
        b=a/i;
        cout<<b<<"\t";
        a=a%i;
    }*/
    /*octavo ejercicio*/
     /*
    int n,a,a1,b,b1,c,c1,d,d1;
    cin>>n;
    a=n/10000;
    a1=n%10000;
    b=a1/1000;
    b1=a1%1000;
    c=b1/100;
    c1=b1%100;
    d=c1/10;
    d1=n%10;
    if(a=!d1){
        cout<<"no es palindrome";
    }else if(b==d){
            cout<<" es palindrome";
        }else{
        cout<<" no es palindrome";
        }*/

    /*noveno ejercicio*/
    /*cout<<"introduce un ahno: ";
    int a;
    cin>>a;
    if (!(a%4) or !(a%400)){
            if(a%100 or !(a%4 or a%400)){
            cout<<"es bisiesto";
            }else{
            cout<<"no es bisiesto";
            }
    }else {
    cout<<"no es bisiesto";
    }/*
    /*decimo ejercicio*/
    /*int a,b=1,c=0,d=0;
    cout<<"introduzca un numero:"<<endl;
    cin>>a;
    for(int i=0;i<=a;i++){
        if (i==0 or i==1){
            cout<<i<<", ";
        }else{
        c=b;
        b=b+d;
        cout<<b<<", ";
        d=c;
        }
    }*/

    /*undecimo ejercicio*/
    /*int a,b=1;
    cout<<"introduzca un numero"<<endl;
        cin>>a;
    for(int i=1;i<=a;i++){
            b=b*i;
    }
    cout<<b;*/

int main(){
    /*cout<<mayordeedad(21);*/
    /*sucesion(45);*/
    /*int may, men;
    float prom;
    mayMenProm(4, 5, 6, may, men, prom);
    cout<<may<<endl;
    cout<<men<<endl;
    cout<< prom <<endl;/*
    /*multiplodedosydeb(9,3);*/
    /*cout<<esprimo(5);*/
    /*primosmenores(25);*/

}
