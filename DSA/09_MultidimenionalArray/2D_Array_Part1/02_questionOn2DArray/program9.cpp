/*
Ques : Write a program to print the transpose of
the matrix entered by the user and store it in a new
matrix.
*/
#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter the number of rows : ";
    cin>>m;
    int arr[m][m];
    cout<<"Enter Elements : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

     cout<<endl;
   
     for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //transpose in the same matrix
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
           int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
        }
    }
    cout<<"transpose array : ";
     cout<<endl;

     for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}