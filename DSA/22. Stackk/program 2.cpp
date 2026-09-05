#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string s){
    stack<char> st;

    for(auto ch:s){
        if(ch=='(') st.push(ch);
        else if(ch==')'){
            if(st.size()==0) return false;
            else if(st.top()=='('){
                st.pop();
            } 
        }

    }
    if(st.size()==0) return true;
    else return false;
}
int main(){
    string s="()()(";
    
    
    if(isBalanced(s)) cout<<"True";
    else cout<<"False";
}