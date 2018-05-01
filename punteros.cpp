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

void invArr(int *arr,const int len){
    int *ptrf=arr+len-1;
    int a;
    for(int i=0;i<len/2;i++,arr++,ptrf--){
        a=*arr;
        *arr=*ptrf;
        *ptrf=a;
    }
}

int tamano(char *arr){
    int c=0;
    for(int i=0;*(arr++)!='\0';i++)
        c++;
    return c;
}

void copystr(char *arr1,char *arr2){
    for(int i=0;i<tamano(arr2);i++,arr1++,arr2++){
        *arr1=*arr2;
    }
    *(arr1+tamano(arr2))='\0';
}

void concstr(char *arr1,char *arr2){
    int a=tamano(arr1);
    for(int i=0;i<tamano(arr2);i++,arr1++,arr2++){
        *(arr1+a)=*(arr2);
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
    int ar[]={1,2,3,4};
    return 0;
}
