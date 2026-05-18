/*
Ques: Write a C++ program to find the largest
element of a given 2D array of integers.
*/

#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[2][3]={4,8,3,9,1,6};

    int max=INT_MIN;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }

    cout<<"largest element : "<<max;
}