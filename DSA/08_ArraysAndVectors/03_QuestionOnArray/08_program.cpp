/*
Ques : Rotate the given array ‘a’ by k steps, where k is
non-negative.
*/


#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void reversePart(int i,int j,vector<int>& v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}


int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    int k;
    cout<<"Enter k : ";
    cin>>k;
    
    display(v);
    for(int i=1;i<=k;i++){
       reversePart(0,v.size()-1,v);
       reversePart(1,v.size()-1,v);
    }
   
    display(v);

}
