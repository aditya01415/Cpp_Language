

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a row no. : ";
    cin>>n;
    int m;
    cout<<"enter a column no. : ";
    cin>>m;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"* ";
        }
       
        cout<<endl;
    }
}