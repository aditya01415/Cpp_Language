/*
Given an array , find if it is sorted or not
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};

    int n=sizeof(arr)/sizeof(arr[0]);

    /*
    bool flag=false;
  
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1-j;i++){
            if(arr[i]<arr[i+1]){
                flag=true;
            } else{
                flag=false;
                break;
            }
        }
       
    }
    */

    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
        }
    }
    if(flag) cout<<"Array is sorted";
    else cout<<"Array is not sorted";
   
}