/*
Ques : Write a program to add two matrices.
*/

#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[2][3]={4,2,3,9,1,6};
    int brr[2][3]={6,4,3,9,1,6};

   int crr[2][3];

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           crr[i][j]=arr[i][j]+brr[i][j];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }

}