/*
Ques : Find the largest element in the given
Array.
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
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<"Maximum element on array is : "<<max;

   
}

/*
#output
Enter size of array : 5
4
5
4
2
4
*/