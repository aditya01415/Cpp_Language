//Selection sort

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,4,1,2};

    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n;i++){
        int mn=INT_MAX;
        int idx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<mn){
                mn=arr[j];
                idx=j;
            }

        }
        int temp=arr[i];
        arr[i]=arr[idx];
        arr[idx]=temp;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}