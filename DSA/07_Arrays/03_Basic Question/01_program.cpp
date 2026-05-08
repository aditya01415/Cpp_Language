/*
Ques : Calculate the sum of all the elements in the
given array.
*/


#include<iostream>
using namespace std;
int main(){
    int size,sum=0;
    cout<<"Enter size of array : ";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }

    cout<<"Sum of element of array is : "<<sum;
   
}