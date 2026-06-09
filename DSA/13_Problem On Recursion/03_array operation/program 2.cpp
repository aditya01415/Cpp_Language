//Find out maximum element of an array using recursion

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void printMax(int i,int arr[],int n,int max){
    if(i==n){
        cout<<max;
        return;
    }
    if(arr[i]>max) max=arr[i];
    printMax(i+1,arr,n,max);
}
int main(){
      int arr[]={1,2,7,4,5};
      int size=sizeof(arr)/sizeof(arr[0]);
      printMax(0,arr,size,INT_MIN);
}