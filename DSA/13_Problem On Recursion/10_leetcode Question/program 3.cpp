//Ques: Kth Symbol in Grammar

#include<iostream>
using namespace std;
int kthGrammar(int n,int k){
    if(n==1) return 0;
    if(k%2==0) {
        int prevAns=kthGrammar(n-1,k/2);
        if(prevAns) return 0;
        else return 1;
    } else {
        int ans=kthGrammar(n-1,k/2+1);
        return ans;
    }
}
int main(){
    int n=2;
    int k=2;
    cout<<kthGrammar(n,k);
}