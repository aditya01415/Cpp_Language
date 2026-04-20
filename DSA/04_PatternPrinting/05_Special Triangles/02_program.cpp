/*
Q5. Print the following pattern:
1
0 1
1 0 1
0 1 0 1
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a row no. : ";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        if(i%2==0) a=0;
        else a=1;
        for(int j=1;j<=i;j++){
           cout<<a<<" ";
            
           if(a==1) a=0;
           else a=1;
        }
        cout<<endl;
    }

    
}