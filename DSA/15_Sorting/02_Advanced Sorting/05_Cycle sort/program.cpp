//cycle sort

#include<iostream>
using namespace std;
int main(){
    int arr[]={4,1,6,2,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++){
        while(arr[i]!=i+1){
            swap(arr[i],arr[arr[i]-1]);
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}