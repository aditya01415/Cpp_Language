/*
Ques : Display this AP - 100,97,94,..upto all 
terms which are positive.
N

*/


#include<iostream>
using namespace std;
int main(){
    for(int i=100;i>=1;i-=3){
        cout<<i<<" ";
    }

    cout<<endl<<"-------------------------"<<endl;

    int a =100;
    for(int i = 1 ;i<=34;i++){
        cout<<a<<" ";
        a-=3;
    }

    cout<<endl<<"-------------------------"<<endl;

    int b =100;
    for( ;b>0;){
        cout<<b<<" ";
        b-=3;
    }
}