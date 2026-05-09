/*
Ques : Find the second largest element in the given
Array.
*/

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
   
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }

    int s_max=INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>s_max && arr[i] != max){
            s_max=arr[i];
        }
    }

    cout<<"Second Maximum element on array is : "<<s_max;

   
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