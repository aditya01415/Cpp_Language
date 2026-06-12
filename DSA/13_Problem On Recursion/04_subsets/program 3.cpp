//find and store all subsets of all string

#include<iostream>
#include<vector>
using namespace std;
void storeSubsets(string str,string ans,vector<string>& res){
    char ch=str[0];
    if(str==""){
      res.push_back(ans);
      return;
    }
    storeSubsets(str.substr(1),ans+ch,res);
    storeSubsets(str.substr(1),ans,res);
}
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    vector<string> result;
    storeSubsets(s,"",result);
    for(auto el:result){
        cout<<el<<endl;
    }
}