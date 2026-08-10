/*
Ques : Sort a String in decreasing order of values associated after removal of values smaller than X
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s="AZYZXBDJXY";
    string str;
    
    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    cout<<str<<endl;
    int n=str.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(str[j]<str[j+1]){
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    cout<<str;
}