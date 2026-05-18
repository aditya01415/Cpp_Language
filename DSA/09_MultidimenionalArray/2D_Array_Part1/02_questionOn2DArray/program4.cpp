/*
Write a program to print sum of all the
elements of a 2D matrix.
*/

#include<iostream>
using namespace std;
int main(){
    int arr[2][3]={4,8,3,9,1,6};

    int sum=0;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           sum+=arr[i][j];
        }
    }

    cout<<"largest element : "<<sum;
}