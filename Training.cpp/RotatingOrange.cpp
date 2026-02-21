#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
    // vector<vector<int>> vv(10, vector<int>(5,-1));
    // for(int i=0;i<vv.size();i++){
    //     for(int j=0;j<vv[i].size();j++){
    //         cout<<vv[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }  
    
    //pair

    pair<int,string>p;
    // p={101,"abc"};
    p=make_pair(101,"def");
    cout<<p.first<<" "<<p.second<<endl;

    vector<pair<int,string>> vp;
    vp.push_back({1,"Arrav"});
    vp.push_back({2,"Aditya"});
    vp.push_back({3,"Amit"});
    vp.push_back({4,"Akhil"});
    vp.push_back({5,"Bharat"});

    for(int i=0;i<vp.size();i++){
       pair<int,string> p;
       p=vp[i];
       cout<<p.first<<", "<<p.second<<endl;
    }

    queue<pair<int,int>> q;
    q.push({0,5});
    q.push({1,4});
    q.push({2,3});
    q.push({3,2});
    q.push({4,1});
    q.push({5,0});

        while(!q.empty()){
            pair<int,int> p;
            p=q.front();
            q.pop();
            cout<<p.first<<" "<<p.second<<endl;
        }
}
