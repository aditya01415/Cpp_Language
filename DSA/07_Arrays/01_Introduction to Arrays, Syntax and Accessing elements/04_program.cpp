/*
Ques: Given an array of marks of students, if the
mark of any student is less than 35 print its roll
number. [roll number here refers to the index of the
array.]
*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of students : ";
    cin>>n;

    int marks[n];

    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    
    cout<<"student is less than 35 print its roll number : "<<endl;
    for(int i=0;i<7;i++){
        if(marks[i]<35){
            cout<<i<<endl;
        }
    }
}