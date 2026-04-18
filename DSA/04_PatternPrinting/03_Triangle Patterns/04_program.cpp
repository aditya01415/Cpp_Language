/*
Q5. Print the following pattern:
1
1 3
1 3 5
1 3 5 7
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a row no. : ";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=2*i-1;j+=2){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a+=2;
        }
        cout<<endl;
    }

    
}