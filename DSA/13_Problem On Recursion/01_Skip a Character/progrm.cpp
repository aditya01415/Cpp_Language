//Skip a character using of loop

#include<iostream>
using namespace std;
int main(){
    string str="Sagar Nagar";
    string s;
    for(int i=0;i<str.size();i++){
        if(str[i]!='a') s.push_back(str[i]);
    }
    cout<<s<<endl;
}