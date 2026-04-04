/*
Ques : Take input Marks of a student and 
print the Grade according to marks:
1) 91-100 Excellent
2) 81-90 Very Good
3) 71-80 Good
4) 61-70 Can do better
5) 51-60 Average
6) 40-50 Below Average
7) <40 Fail
*/

#include<iostream>
using namespace std;
int main(){
    int mark;
    cout<<"Enter your marks : ";
    cin>>mark;

    if(mark >= 91 && mark <= 100){
        cout<<"Excellent";
    }
    if(mark >= 81 && mark <= 90){
        cout<<"Very Good";
    }
    if(mark >= 71 && mark <= 80){
        cout<<"Good";
    }
    if(mark >= 61 && mark <= 70){
        cout<<"Can do better";
    }
    if(mark >= 51 && mark <= 60){
        cout<<"Average";
    }
    if(mark >= 40 && mark <= 50){
        cout<<"Below Average";
    }
    if(mark < 40){
        cout<<"Fail";
    }
   
}