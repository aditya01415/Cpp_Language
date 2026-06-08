//skip a element from array;

#include<iostream>
#include<vector>
using namespace std;
void removeElement(vector<int> & v,vector<int>& ans,int i){
    if(i==v.size()){
        for(auto el:ans){
            cout<<el<<endl;
        }
        return;
    }
      int el=v[i];
      if(v[i]==1) removeElement(v,ans,i+1);
      else {
        ans.push_back(v[i]);
        removeElement(v,ans,i+1);
      }
}
int main(){
    vector<int> v={1,2,3,1,1,4,1,7};
    vector<int> ans;
    removeElement(v,ans,0);
   
    
}