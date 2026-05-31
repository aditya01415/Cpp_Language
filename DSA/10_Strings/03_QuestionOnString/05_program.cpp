
/*
Ques : Given n strings consisting of lowercase
English alphabets. Print the character that is
occurring most number of times.
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;

    vector<int> arr(26,0);

    for(int i=0;i<str.size();i++){
        int ascii=(int)str[i];
        arr[ascii-97]++;
    }

    int max=0;
    for(int i=0;i<26;i++){
        if(arr[i]>max) max=arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==max) cout<<(char)(i+97)<<" "<<arr[i];
    }
}