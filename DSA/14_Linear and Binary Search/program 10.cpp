/*
Ques : Peak index in mountain array
*/

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,3,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<n-1;i++){
         if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            cout<<i<<endl;
            break;
         }
    }
}