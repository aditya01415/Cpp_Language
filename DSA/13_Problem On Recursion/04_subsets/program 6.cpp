//find and store all subsets of all string

#include<iostream>
#include<vector>
#include<string>
using namespace std;
void storeSubsets(string str,string ans,vector<string>& res,bool flag){
    
    if(str==""){
      res.push_back(ans);
      return;
    }
    char ch=str[0];
    if(str.size()==1){
        if(flag==true)  storeSubsets(str.substr(1),ans+ch,res,true);
        storeSubsets(str.substr(1),ans,res,true);
        return;
    }
    char dh=str[1];
    if(ch==dh){
        if(flag==true)  storeSubsets(str.substr(1),ans+ch,res,true);
        storeSubsets(str.substr(1),ans,res,false);
    }else {
      if(flag==true)  storeSubsets(str.substr(1),ans+ch,res,true);
    storeSubsets(str.substr(1),ans,res,true);
    }

    
    
}

int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    vector<string> v;
    storeSubsets(s,"",v,true);
    // storeSubsets("",s,v,true);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
   }
}