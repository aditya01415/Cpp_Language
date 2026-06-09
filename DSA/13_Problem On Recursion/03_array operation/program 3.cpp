//Find out maximum element of an array using recursion

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int maxInArray(int i,int arr[],int n){
    if(i==n) return INT_MIN;
    return max(arr[i], maxInArray(i+1,arr,n));
}
int main(){
      int arr[]={1,2,7,4,5};
      int size=sizeof(arr)/sizeof(arr[0]);
      cout<<maxInArray(0,arr,size);
}