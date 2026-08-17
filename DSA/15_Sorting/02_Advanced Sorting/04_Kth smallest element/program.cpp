//Selection sort

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,4,1,2};
    int k=3;

    int n=sizeof(arr)/sizeof(arr[0]);
   
    for(int i=0;i<n-1;i++){
        int mn=INT_MAX;
        int idx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<mn){
                mn=arr[j];
                idx=j;
            }

        }
        
        if(k==i+1){
            cout<<mn;
            break;
        }
        swap(arr[i],arr[idx]);
    }
    
}