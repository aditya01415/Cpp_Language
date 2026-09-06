#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int solve(int val1,int val2,char op){
     if(op=='+') return val1+val2;
     else if(op=='-') return val1-val2;
     else if(op=='*') return val1*val2;
     else return val1/val2;
}
int pre(char ch){
    if(ch=='+' || ch=='-') return 1;
    if(ch=='*' || ch=='/') return 2;
    return 0;
    
}
int main(){
    string s="2+6*4/8-3";
    stack<int> val;
    stack<char> op;
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57){
           val.push(s[i]-48);
        } else {
            if(op.size()==0 || pre(s[i])>pre(op.top())) op.push(s[i]);
            else {
                while(op.size()>0 && pre(s[i])<=pre(op.top())){
                   int val2=val.top();
                   val.pop();
                   int val1=val.top();
                   val.pop();
                   char operate=op.top();
                   op.pop();
                   int ans=solve(val1,val2,operate);
                   val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size()>0){
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        char operate=op.top();
        op.pop();
        int ans=solve(val1,val2,operate);
        val.push(ans);
    }

    cout<<val.top();
    
}