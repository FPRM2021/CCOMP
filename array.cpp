#include <iostream>

using namespace std;

int sumArray(int arr[], int len){
    int sum=0;
    for (int i=0;i<len;i++){
        sum+=arr[i];
    }
    return sum;
}

int sumArrayR(int arr[],int len){
    if (len==1){
         return arr[0];
    }else{
    return arr[len-1]+sumArrayR(arr,--len);
    }
}

void invArr(int arr[],int len){
    int a;
    for(int i=0;i<(len-1)/2;i++){
        a=arr[i];
        arr[i]=arr[len-1-i];
        arr[len-2-i]=a;
        cout<<ar;
    }
}

int main()
{
    int ar[]={1,2,3,4};
    invArr(ar,4);
    return 0;
}
