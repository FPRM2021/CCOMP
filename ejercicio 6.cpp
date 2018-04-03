#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"introduzca un numero: "<<endl;
    cin>>a;
    int b=0;
            int contador=1;
            for (int e=2; e=e;e++){
                for (int i=2; i<e; i++){
                    if (e%i==0){
                        contador=0;
                        break;
                    }
                }
                if (contador==1){
                    cout<<e<<endl;
                    b+=1;
                    if(b==a){
                        break;
                    }
                    }else{
                    contador=1;
                    }
                }
}
