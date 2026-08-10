//Insertion Sort

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};

    int n=sizeof(arr)/sizeof(arr[0]);

    for(int el:arr){
        cout<<el<<" ";
    }
    arr[-1]=INT_MIN;

    for(int i=1;i<n;i++){
        int idx=i;
        while(arr[idx-1]>arr[idx]){
                swap(arr[idx-1],arr[idx]);
            idx--;
        }
    }
    cout<<endl;
    for(int el:arr){
        cout<<el<<" ";
    }
}