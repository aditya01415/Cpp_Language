/*
Ques : Given n strings consisting of lowercase
English alphabets. Print the character that is
occurring most number of times.
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;

    int max=0;
    for(int i=0;i<str.size();i++){
        int count=1;
        for(int j=i+1;j<str.size();j++){
            if(str[i]==str[j]) count++;
        }
       if(count>max){
        max=count;
       }
    }
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        int count=1;
        for(int j=i+1;j<str.size();j++){
            if(str[i]==str[j]) count++;
        }
       if(count==max){
        cout<<ch<<" "<<max<<endl;
       } 
    }
}