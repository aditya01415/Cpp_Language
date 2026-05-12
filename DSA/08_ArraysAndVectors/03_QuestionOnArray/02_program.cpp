/*
Ques : Find the doublet in the Array whose sum is 
equal to the given value x.
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter target value : ";
    cin>>x;

    vector<int> v;
    int n;
    cout<<"Enter Size of array : ";
    cin>>n;

    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }

    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}