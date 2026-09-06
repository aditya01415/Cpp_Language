#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
string remove(string s){
    stack<char> st;
    st.push(s[0]);
   for(int i=1;i<s.size();i++){
      if(st.top()!=s[i]) st.push(s[i]);;
   }
    string ans;
   while(st.size()>0){
       ans.push_back(st.top());
       st.pop();
   }
   reverse(ans.begin(),ans.end());
   return ans;
}
int main(){
     string str="aaabbcaabbcccdd";

     cout<<remove(str);
}