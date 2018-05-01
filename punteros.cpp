#include <iostream>

using namespace std;

int sumArray(int *arr,const int len){
    int *ptr=arr;
    int sum=0;
    for (;ptr<=(arr+len-1);ptr++)
        sum+=*ptr;
    return sum;
}

int sumArrayR(int *arr,int len){
    int *ptr=arr+len-1;
         return (len==1)?ptr=arr,*ptr:*ptr+sumArrayR(arr,--len);
}

void invArr(int *arr,const int len){
    int *ptr=(arr+len-1);
    int a;
    for(;ptr>=arr;ptr--,arr++){
        a=*arr;
        *arr=*ptr;
        *ptr=a;
    }
}

int tamano(char *arr){
    int a=0;
    char *ptr=arr;
    for(int i=0;*(ptr+i)!='\0';i++)
        a++;
    return a;
}

void copystr(char *arr1,char *arr2){
    char *ptr=arr1;
    char *ptr1=arr2;
    for(int i=0;*(ptr1+i)!='\0';i++){
        *(ptr+i)=*(ptr1+i);
    }
    *(ptr+tamano(arr2))='\0';
}

void concstr(char *arr1,char *arr2){
    char *ptr=arr1;
    char *ptr1=arr2;
    int a;
    for(int i=0;*(ptr+i)!='\0';i++){
        a=i+1;
    }
    for(int e=0;*(ptr1+e)!='\0';e++){
        *(ptr+a+e)=*(ptr1+e);
    }
}
int main()
{
    char cad[20]="hola";
    char cad1[20]="adios";
    int ar[]={1,2,3,4};
    concstr(cad1,cad);
    cout<<cad1;
    return 0;
}
