//Ques: Count and Say

#include<iostream>
#include<string>
using namespace std;
string countAndSay(int n){
    if(n==1) return "1";

    string str=countAndSay(n-1);
    cout<<str<<endl;
    int freq=1;
    char ch=str[0];
    string ans="";
    for(int i=1;i<str.size();i++){
        char dh=str[i];
        if(ch==dh) freq++;
        else {
            ans+=(to_string(freq)+ch);
            freq=1;
            ch=dh;
        }
    }
    ans+=(to_string(freq)+ch);
    return ans;
}
int main(){
    int n=4;
    cout<<countAndSay(n);
}