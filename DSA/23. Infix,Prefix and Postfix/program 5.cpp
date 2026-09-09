#include<iostream>
#include<vector>
#include<stack>
using namespace std;
string solve(string val1,string val2,char op){
     string ans="";
     ans.push_back(op);
     ans+=val1;
     ans+=val2;
     return ans;
}
int pre(char ch){
    if(ch=='+' || ch=='-') return 1;
    if(ch=='*' || ch=='/') return 2;
    return 0;
    
}
int main(){
    string s="2+6*4/8-3";
    stack<string> val;
    stack<char> op;
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57){
           val.push(to_string(s[i]-48));
        } else {
            if(op.size()==0 || pre(s[i])>pre(op.top())) op.push(s[i]);
            else {
                while(op.size()>0 && pre(s[i])<=pre(op.top())){
                   string val2=val.top();
                   val.pop();
                   string val1=val.top();
                   val.pop();
                   char operate=op.top();
                   op.pop();
                   string ans=solve(val1,val2,operate);
                   val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size()>0){
         string val2=val.top();
        val.pop();
                   string val1=val.top();
                   val.pop();
                   char operate=op.top();
                   op.pop();
                   string ans=solve(val1,val2,operate);
                   val.push(ans);
    }

    cout<<val.top();
    
}