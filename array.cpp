#include <iostream>

using namespace std;


int sumArray(const int arr[],const int len){

    int sum=0;

    for (int i=0;i<len;i++){

        sum+=arr[i];

    }

    return sum;

}



int sumArrayR(const int arr[],int len){

    if (len==1){

         return arr[0];

    }else{

    return arr[len-1]+sumArrayR(arr,--len);

    }

}



void invArr(int arr[],const int len){

    for(int i=0;i<len/2;i++){

        int a=arr[i];

        arr[i]=arr[len-1-i];

        arr[len-1-i]=a;
    }
    for(int i=0;i<len;i++){
        cout<<arr[i]<<", ";
    }
}

int tamano(char arr[]){
    int a=0;
    for(int i=0;arr[i]!='\0';i++){
        a++;
        }
    return a;
    }

void copystr(char arr1[],char arr2[]){
    for(int i=0;arr2[i]!='\0';i++){
        arr1[i]=arr2[i];
        cout<<arr1[i];
    }
}

void concstr(char arr1[],char arr2[]){
    int a;
    for(int i=0;arr1[i]!='\0';i++){
        a=i+1;
    }
    for(int e=0;arr2[e]!='\0';e++){
        arr1[a+e]=arr2[e];
    }
    for(int i=0;arr1[i]!='\0';i++){
        cout<<arr1[i];
    }
}


int main()

{
    char cad[20]="adios";
    char cad1[]="hola";
    int ar[]={1,2,3,4};
    return 0;

}
