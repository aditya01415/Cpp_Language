
#include<iostream>
using namespace std;

int fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}

int Permutation(int n, int r){
      return fact(n)/(fact(n-r));
}

int Combination(int n, int r){
      return fact(n)/(fact(r)*(fact(n-r)));
}



int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;

    cout<<"Permutation is : "<<Permutation(n,r)<<endl;
    cout<<"Combination is : "<<Combination(n,r)<<endl;
}