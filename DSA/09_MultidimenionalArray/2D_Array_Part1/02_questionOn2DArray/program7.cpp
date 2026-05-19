/*
Ques : Write a program to add two matrices.
*/

#include<iostream>
#include<limits.h>
using namespace std;
void display(int (&a)[2][3]){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(){
    int arr[2][3]={4,2,3,9,1,6};
    int brr[2][3]={6,4,3,9,1,6};


    display(arr);

    display(brr);


    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           brr[i][j]=arr[i][j]+brr[i][j];
        }
    }

    display(brr);

}