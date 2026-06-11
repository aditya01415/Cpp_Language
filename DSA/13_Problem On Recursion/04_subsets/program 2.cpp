//find all subsets of all string

#include<iostream>
using namespace std;
void printSubsets(string str,string ans,int idx){
    char ch=str[idx];
    if(idx==str.size()){
      cout<<ans<<endl;
      return;
    }
    printSubsets(str,ans+ch,idx+1);
    printSubsets(str,ans,idx+1);
}
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    printSubsets(s,"",0);
}