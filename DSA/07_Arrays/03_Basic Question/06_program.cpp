/*
Ques : Count the number of elements in given array
greater than a given number x.
*/


#include<iostream>
using namespace std;
int main(){
    int size,count=0;
    cout<<"Enter size of array : ";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter a element : ";
    cin>>x;
        
    for(int i=0;i<size;i++){
       if(arr[i]>x){
        count++;
       }
    }

    cout<<"number of elements in given array greater than a given number x is : "<<count;
   
}