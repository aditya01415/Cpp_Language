/*
Ques : Display this AP - 1,3,5,7,9.. upto ‘n’ 
terms.
*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a term : ";
    cin>>n;
    int an=2*n-1;

    for(int i=1;i<=an;i+=2){
        cout<<i<<" ";
    }

    cout<<endl<<"-------------------------"<<endl;

    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a+=2;
    }


}