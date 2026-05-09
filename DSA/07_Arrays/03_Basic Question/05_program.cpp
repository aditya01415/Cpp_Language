/*
Ques : Find the Smallest element in the given
Array.
*/

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size,sum=0;
    cout<<"Enter size of array : ";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

    cout<<"Minimum element on array is : "<<min;

   
}

