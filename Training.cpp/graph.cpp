#include<iostream>
#include<vector>
using namespace std;
int main() {
    int V,E;
    cin >> V >> E;
    int i;
    vector<int> adj[V];
    for(i=0;i<E;i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(i=0;i<V;i++) {
        cout<<i<<":";
        for(int j=0;j<adj[i].size();j++) {
            cout<<" "<<adj[i][j];
        }
        cout<<endl;
    }
}
