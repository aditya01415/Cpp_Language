// Print all the elements of an array


#include<iostream>
#include<vector>
using namespace std;
void printArray(int i,int arr[],int n){
    if(i==n) return;
    cout<<arr[i]<<endl;
    printArray(i+1,arr,n);
}
int main(){
      int arr[]={1,2,3,4,5};
      int size=sizeof(arr)/sizeof(arr[0]);
      printArray(0,arr,size);
}