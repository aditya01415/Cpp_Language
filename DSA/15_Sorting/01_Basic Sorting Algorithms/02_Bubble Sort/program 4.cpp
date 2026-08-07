//Bubble sort Optimization

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={6,4,1,2,5,3};

    int n=sizeof(arr)/sizeof(arr[0]);

    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    for(int j=0;j<n-1;j++){
        bool flag=true;
        for(int i=0;i<n-1-j;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                flag=false;
            }
        }
        if(flag) break;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}