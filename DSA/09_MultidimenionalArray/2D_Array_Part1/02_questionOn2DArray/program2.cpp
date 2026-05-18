/*
Ques : Write a program to store roll number and
marks obtained by 4 students side by side in a
matrix.
*/

#include<iostream>
using namespace std;
int main(){
    int stud[4][2];

    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cin>>stud[i][j];
        }
    }
   
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<stud[i][j]<<" ";
        }
        cout<<endl;
    }
}