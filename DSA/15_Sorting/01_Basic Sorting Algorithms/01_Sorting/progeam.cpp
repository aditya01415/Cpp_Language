
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v(5);

    cout<<"Enter Elements : ";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    
    //Sort in Ascending order
    sort(v.begin(),v.end());  //O(nlogn)
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //Sort in Decending order
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}