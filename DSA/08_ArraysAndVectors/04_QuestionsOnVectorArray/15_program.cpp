
/*
Previous greatest elements
*/

#include<iostream>
#include<vector>
#include<limits>
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
   }
   cout<<endl;
}
int main(){
    vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> v2;
    for(int i=0;i<v.size();i++){
        vector<int> p;
        for(int j=i-1;j>=0;j--){
           p.push_back(v[j]);
        }
        // display(p);
        int max=-1;
        for(int s=0;s<p.size();s++){
                if(p[s]>max){
                   max=p[s];
                  }
        }

        v2.push_back(max);

        
    }

    display(v2);


  
    

}