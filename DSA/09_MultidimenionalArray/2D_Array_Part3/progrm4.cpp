
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1(4,5);
    for(int i=0;i<4;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    vector<vector<int> > v(3,vector<int> (4,2));

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    int row=v.size();
    int col=v[0].size();
    cout<<row<<endl;
    cout<<col<<endl;
}