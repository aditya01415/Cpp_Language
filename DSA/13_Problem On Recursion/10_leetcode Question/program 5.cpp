//Permutation sequence

#include<iostream>
#include<vector>
#include<string>
using namespace std;
void permutation(string str,string ans,vector<string>& result){
       if(str==""){
          result.push_back(ans);
           return;
       }
       for(int i=0;i<str.size();i++){
        char ch=str[i];
        string left=str.substr(0,i);
        string right=str.substr(i+1);
        permutation(left+right,ans+ch,result);
       }
}
int main(){
    string str="12345";
    vector<string> result;
    permutation(str,"",result);

    for(auto el:result){
        cout<<el<<endl;
    }
}