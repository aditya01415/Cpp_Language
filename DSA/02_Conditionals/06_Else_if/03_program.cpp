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

   if(mark >= 91){
    cout<<"Excellent";
   } else {
     if(mark >= 81){
        cout<<"Very Good";
     } else {
        if(mark>=71){
            cout<<"Good";
        }
        else {
            if(mark >= 61){
                cout<<"Can do better";
            }
            else {
                if(mark >= 51){
                    cout<<"Average";
                }
                else{
                    if(mark >= 40){
                        cout<<"Below Average";
                    }
                    else {
                       
                          cout << "Fail";
                     
                    }
                }
            }
        }
     }
   }
}