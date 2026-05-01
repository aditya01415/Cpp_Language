

#include<iostream>
using namespace std;


int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;

    int nfact=1;
    for(int i=2;i<=n;i++){
        nfact*=i;
    }
    int rfact=1;
    for(int i=2;i<=r;i++){
        rfact*=i;
    }
    int nrfact=1;
    for(int i=2;i<=n-r;i++){
        nrfact*=i;
    }

    

    cout<<"Permutation is : "<<nfact/nrfact<<endl;
    cout<<"Combination is : "<<nfact/(rfact*nrfact)<<endl;
}