//find subsets of string / power set

#include<iostream>
using namespace std;
void printSubsets(string str,string ans,int idx,bool flag){
    char ch=str[idx];
    if(idx==str.size()){
      cout<<ans<<endl;
      return;
    }
    if(str.size()==1){
        if(flag) printSubsets(str,ans+ch,idx+1,true);
        printSubsets(str,ans,idx+1,true);
    }
    char dh=str[idx+1];
    if(ch==dh){
        if(flag) printSubsets(str,ans+ch,idx+1,true);
        printSubsets(str,ans,idx+1,false);
    } else {
      if(flag) printSubsets(str,ans+ch,idx+1,true);
    printSubsets(str,ans,idx+1,true);
    
    }
   
}
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    printSubsets(s,"",0,true);
}