/*
Ques : Given n string consisting of digits from
0 to 9. Return the index of string which has
maximum value. (Take 0 based indexing)
*/


#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
   vector<string> v={"0123", "0023", "456", "00182", "940", "2901"};

   int max=stoi(v[0]);
   int idx=0;

   for(int i=0;i<v.size();i++){
       int num=stoi(v[i]);
       if(num>max){
        max=num;
        idx=i;
       }
   }

   cout<<idx;

}