
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
    int max=0;
    for(int i=0;i<sstr.size();i++){
        int count=1;
        for(int j=i+1;j<sstr.size();j++){
            if(sstr[i]==sstr[j]){
                count++;
            }
        }

        if(max<count){
            max=count;
        }
    }
    for(int i=0;i<sstr.size();i++){
        int count=1;
        for(int j=i+1;j<sstr.size();j++){
            if(sstr[i]==sstr[j]){
                count++;
            }
        }

        if(max==count){
           cout<<sstr[i]<<" "<<count<<endl;
        }
    }
}