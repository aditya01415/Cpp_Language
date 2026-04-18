/*
Q5. Print the following pattern:
*
* *
* * *
* * * *
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a row no. : ";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     int ch=65;
    //     for(int j=ch;j<=ch+n-1;j++){
    //         cout<<(char)j<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<(char)(j+64)<<" ";
    //     }
    //     cout<<endl;
    // }
    
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}