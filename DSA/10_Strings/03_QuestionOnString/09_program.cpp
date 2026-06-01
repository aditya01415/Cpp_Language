
/*
Ques : Given a sentence ‘str’, return the word
that is occurring most number of times in that
sentence.
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str;
   getline(cin,str);

    stringstream ss(str);
    string temp;
    vector <string> sstr;

    while(ss>>temp){
        sstr.push_back(temp);
    }

    sort(sstr.begin(),sstr.end());
    int maxCount=0;
    int count=1;
    for(int i=0;i<sstr.size();i++){
        if(sstr[i]==sstr[i-1]) count++;
        else count=1;

        maxCount=max(maxCount,count);
    }
    
    count=1;
    for(int i=0;i<sstr.size();i++){
        if(sstr[i]==sstr[i-1]) count++;
        else count=1;
         
         if(count==maxCount){
           cout<<sstr[i]<<" "<<count<<endl;
         }
    }

}