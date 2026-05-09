#include<iostream>
using namespace std;

void display(int a[],int size){
       for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
       }
       cout<<endl;
}

void change(int b[]){
    b[0]=100;
}

int main(){
    int arr[]={12,33,21,34,78};
     int size=sizeof(arr)/sizeof(arr[0]);
    //accessing the elements array in another function
    //updation pass of value / reference
    display(arr,size);
    change(arr);
    display(arr,size);
}