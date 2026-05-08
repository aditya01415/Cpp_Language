/*
Linear search
Ques : Find the element x in the array . Take array and
x as input.
*/

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    
    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    int x;
    cout<<"Enter element for search on array : ";
    cin>>x;
    bool checked=false;
    for(int i=0;i<size;i++){
        if(arr[i]==x){
           checked=true;
           break;
        } 
    }

    if(checked){
        cout<<"Present";
    }else {
        cout<<"Not Present";
    }

    
   
}