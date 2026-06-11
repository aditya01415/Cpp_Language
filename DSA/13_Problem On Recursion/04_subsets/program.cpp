//find all subsets of all string

#include<iostream>
using namespace std;
void printSubsets(string str,string ans){
    char ch=str[0];
    if(str==""){
      cout<<ans<<endl;
      return;
    }
    printSubsets(str.substr(1),ans+ch);
    printSubsets(str.substr(1),ans);
}
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    printSubsets(s,"");
}