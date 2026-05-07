
#include<iostream>
using namespace std;
int main(){
    int arr[7];
    cout<<"Enter ELements of array : "<<endl;

    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    cout<<"Element in array is : "<<endl;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}