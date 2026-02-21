//DFS code
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

    cout<<"\nDFS order is => ";
    stack<int> s;
    vector<int> visited(n, 0);
    s.push(0);
    visited[0]=1;
    while(s.size()!=0){
        int x = s.top();
        cout<<x<<", ";
        s.pop();
        for(int i=0;i<adjlist[x].size();i++){
            int y = adjlist[x][i];
            if(visited[y]==0){
                visited[y]=1;
                s.push(y);
            }
        }
    }

}