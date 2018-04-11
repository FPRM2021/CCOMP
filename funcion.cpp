#include <iostream>

using namespace std;

int sucesion(int a, int b=1){
if (b<a){
    cout<<b<<", ";
    return sucesion(a,++b);
}if(b==a){
cout<<b;
}
}
bool esPrimo(int n){
    if(n<2)
        return false;
    for(int i=2;i<n;i++)
        if(!(n%i))
            return false;
    return true;
}
void nPrimo(int n){
    int c=0, i=2;
    while(c<n){
        if (esPrimo(i)){
            cout<<i<<endl;
            c++;
        }
        i++;
        }
    }

bool palindrome(int n){
    int a,a1,b,b1,c,c1,d;
    a=n/10000;
    a1=n%10000;
    b=a1/1000;
    b1=a1%1000;
    c=b1%100;
    c1=c/10;
    d=n%10;
    if(a=!d){
        return false;
    }else if(b==c1){
            return true;
        }else{
        return false;
        }
    }

bool bisiesto(int a){
    if (!(a%4) or !(a%400))
            if(a%100 or !(a%4 or a%400))
                return true;
        return false;
    }
int fib(int a){
    if (a==0){
        return a;
    }if (a==1 or a==2){
        return 1;
        }else{
            int b=(fib(a-1))+(fib(a-2));
            return b;
        }
    }

int factorial(int a){
    if (a==0 or a==1)
            return a;
    return a*factorial(a-1);
}
int main(){
cout<<factorial(5);
}

