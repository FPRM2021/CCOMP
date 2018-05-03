#include <iostream>

using namespace std;
int lenchar(char *a,char ce='\0'){
    int c=0;
    for(;*(a++)!=ce;c++);
    return c;
}
int pot(int b, int exp){
    if(exp==0){
       return 1;
       }
       return exp==1?b:b*pot(b,--exp);
}
double notacion(char* numero){
    char tmp;
    double n = 0;
    int tam=lenchar(numero,'.')-1;
    for(char* i = numero; *i!='.'; i++,tam--){
        tmp = *i-'0';
        n += tmp*pot(10,tam);
    }
    tam=lenchar(numero,'.')+1;
    int aux = lenchar(numero,'e')-lenchar(numero,'.')-1;
    int j = 1;
    char *i=numero;
    i+=tam;
    for(;j<=aux;j++){
        tmp = *i-'0';
        n+=(float)tmp/pot(10,j);
        i++;
    }
        tmp = numero[lenchar(numero,'e')+1];
    int exp= numero[lenchar(numero,'e')+2]-'0';
    if(tmp == '+')
        return n * pot(10,exp);
    if(tmp == '-')
        return n/ pot(10,exp);
}

bool substring(char* s, char* t){
    char*j=s;
    for(char *i=t; *i!='\0';i++,j++){
        if(*t==*s){
            char*tmp_1 = t;
            char*tmp_2 = s;
            int tam = lenchar(t);
            while(true){
                if(*tmp_1==*tmp_2){
                    tmp_1++;
                    tmp_2++;
                    --tam;
                    if(tam==0){
                        return true;
                    }
                    continue;
                }
                else{
                    break;
                }
            }
        }
    }
    return false;
}

char *invCad (char *cad){
    int tam=lenchar(cad);
    char inv[tam];
    for (int pti=0, ptf=tam-1; pti<tam; pti++, ptf--)
    {
        inv[pti]=cad[ptf];
    }
    inv[tam] ='\0';
    cout<<inv<<endl;
    return inv;
}

bool esPalindromo(char *cad){
    int tam=lenchar(cad);
    for(int i=0; i<tam/2; i++)
        if(cad[i] != cad[tam-i-1])
            return false;
    return true;
}

int main()
{
    char n[]={"123.456e+6"};
    char cd[]={"12321"};
    cout<<esPalindromo(cd);
    return 0;
}
