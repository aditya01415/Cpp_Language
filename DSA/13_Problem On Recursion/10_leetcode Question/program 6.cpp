//Permutation sequence

#include<iostream>
#include<vector>
#include<string>
using namespace std;
void helper(string str,string ans,vector<string>& result){
       if(str==""){
          result.push_back(ans);
           return;
       }
       for(int i=0;i<str.size();i++){
        char ch=str[i];
        string left=str.substr(0,i);
        string right=str.substr(i+1);
        helper(left+right,ans+ch,result);
       }
}
string getPermutation(int n, int k) {
    string str;
    for(int i=1;i<=n;i++){
        str+=to_string(i);
    }
    vector<string> result;
    helper(str,"",result);
    return result[k-1];
}
int main(){
    int n=3;
    int k=1;
    cout<<getPermutation(n,k);
    

}