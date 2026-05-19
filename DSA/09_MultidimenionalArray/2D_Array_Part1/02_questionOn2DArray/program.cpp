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
    int n;
    cout<<"Enter the number of columns : ";
    cin>>n;
    int arr[m][n];
    int brr[n][m];
    cout<<"Enter Elements : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

     cout<<endl;
   
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            brr[i][j]=arr[j][i];
        }
    }
    cout<<"transpose array : ";
     cout<<endl;

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}