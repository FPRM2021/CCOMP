#include <iostream>

using namespace std;
void esPerfecto(){
for(int i=1;i<=1000;i++){
    int b=0;
    for(int e=1;e<i;e++){
        if(!(i%e)){
            b=b+e;
        }
    }
        if (b==i){
            for(int c=1;c<i;c++){
                if(!(b%c)){
                    cout<<c<<" ";
                }
            }
            cout<<i<<endl;
        }
    }
}
bool esPrimo(int a){
    int contador=1;
    for(int i=2;i<a;i++){
        if(!(a%i)){
            contador++;
        }
    }
    if(contador==1){
        return true;
    }else{
        return false;
    }
}

void priMen(int a){
    int b=0;
    for(int i=2;i;i++){
        if(esPrimo(i)){
            b++;
            cout<<i<<" ";
        }
        if(a==b){
            break;
        }
    }
}

int Pot(int a, int b){
    if(a==1 or b==1){
        return a;
    }
    if(b==0){
        return 1;
    }
    return a*Pot(a,b-1);
}

void Inter(int &a, int&b){
b=b+a;
a=b-a;
b=b-a;
cout<<a<<" "<<b<<endl;
}
void InterOdB(int &a, int&b){
a=a^b;
b=a^b;
a=a^b;
cout<<a<<" "<<b<<endl;
}
int main()
{
int a=5;
int b=4;
esPerfecto();
return 0;
}
