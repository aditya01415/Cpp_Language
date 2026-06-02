#include<iostream>
using namespace std;

void factUpToNum1(int n){
    
    for(int i=1;i<=n;i++){
        int fact=1;
        for(int j=2;j<=i;j++){
            fact*=j;
        }
        cout<<fact<<endl;
    }
}
void factUpToNum2(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
      fact*=i;
      cout<<fact<<endl;
    }
}

int fact(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    cout<<fact(5)<<endl;
    factUpToNum1(5);
    factUpToNum2(5);
}