
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
   vector<string> str={"flower","flow","flight"};

   for(int i=0;i<str.size();i++){
    cout<<str[i]<<" ";
   }
   
   cout<<endl;
   sort(str.begin(),str.end());
   
   for(int i=0;i<str.size();i++){
    cout<<str[i]<<" ";
   }
}