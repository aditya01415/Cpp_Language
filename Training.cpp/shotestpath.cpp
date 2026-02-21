#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int n,e;
    cout<<"Enter the no of vertices : ";
    cin>>n;
    cout<<"Enter the no of edges :";
    cin>>e;
    vector<int> adjlist[n+1];
    for(int i=1;i<=e;i++){
        cout<<"Enter the end points of edge "<<i<<" : ";
        int a,b;
        cin>>a>>b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
    }
    for(int i=0;i<n;i++){
        cout<<i<<" : ";
        for(int j=0;j<adjlist[i].size();j++){
            cout<<adjlist[i][j]<<", ";
        }
        cout<<endl;
    }
    queue<int>q;
    vector<int>status(n,-1);
    q.push(3);
    status[3]=0;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(int j=0;j<adjlist[x].size();j++){
            int y=adjlist[x][j];
            if(status[y]==-1){
                status[y]=status[x]+1;
                q.push(y);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<status[i]<<endl;
    }
}