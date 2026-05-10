#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; 
    cout<<v.capacity()<<endl;
    v.push_back(9); 
    cout<<v.capacity()<<endl;
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;

    v[0]=12;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

   /*
   #Output
    0
    1
    2
    4
    4
    12 6 2 3
   */
    /*
    vector<int> v; 
    cout<<v.size()<<endl;
    v.push_back(9); 
    cout<<v.size()<<endl;
    v.push_back(6);
    cout<<v.size()<<endl;
    v.push_back(2);
    cout<<v.size()<<endl;
    v.push_back(3);
    cout<<v.size()<<endl;

    v[0]=12;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

    #output
    0
    1
    2
    3
    4
    12 6 2 3*/
}