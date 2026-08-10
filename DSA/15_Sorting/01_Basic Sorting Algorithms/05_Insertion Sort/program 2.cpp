//Insertion Sort

#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};

    int n=sizeof(arr)/sizeof(arr[0]);

    for(int el:arr){
        cout<<el<<" ";
    }

    for(int i=1;i<n;i++){
        int idx=i;
        while(idx>=1){
            if(arr[idx]>=arr[idx-1]) break;
            if(arr[idx-1]>arr[idx]) swap(arr[idx-1],arr[idx]);
            idx--;
        }
    }
    cout<<endl;
    for(int el:arr){
        cout<<el<<" ";
    }
}