//Skip a character using of Recursion

#include<iostream>
using namespace std;
void remove_char(string str,string s){
    if(str.size()==0){
        cout<<s<<endl;
        return;
    }
    char ch=str[0];
    if(ch=='a') remove_char(str.substr(1),s);
    else remove_char(str.substr(1),s+ch);
}
void remove_char2(string str,string s,int i){
    if(i==str.length()){
        cout<<s;
        return;
    }
    char ch=str[i];
    if(ch=='a') remove_char2(str,s,i+1);
    else remove_char2(str,s+ch,i+1);
}
int main(){
    string str="sagar nagar";
    remove_char(str,"");
    remove_char2(str,"",0);
}