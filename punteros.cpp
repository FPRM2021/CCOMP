#include <iostream>

using namespace std;

int sumArray(int *arr,int len){
    int sum=0;
    for (;len!=0;++arr,--len)
        sum+=*arr;
    return sum;
}

int sumArrayR(int *arr,int len){
    return (len==0)?0:*arr+sumArrayR(++arr,--len);
}

void invArr(int *arr,int len){
    int *ptrf=arr+len-1;
    for(;arr<ptrf;arr++,ptrf--,len--){
        *arr+=*ptrf;
        *ptrf=*arr-*ptrf;
        *arr=*arr-*ptrf;
    }
}
int tamano(char *arr){
    int c=0;
    for(;*(arr)!='\0';arr++)
        c++;
    return c;
}

void copystr(char *arr1,char *arr2){
    char *ptrf=arr2+tamano(arr2);
    for(;arr2<ptrf;arr1++,arr2++){
        *arr1=*arr2;
    }
    *(arr1+tamano(arr2))='\0';
}

void concstr(char *arr1,char *arr2){
    char *ptrf=arr1+tamano(arr1);
    for(;arr2<arr2+tamano(arr2);ptrf++,arr2++){
        *ptrf=*arr2;
    }
}

void printArr(int arr[],int len){
    for(int i=0;i<len;++i){
        cout<<arr[i]<<' ';
    }
}

int main()
{
    char cad[20]="hola";
    char cad1[20]="adios";
    int ar[]={1,2,3,4,5};
    return 0;
}
