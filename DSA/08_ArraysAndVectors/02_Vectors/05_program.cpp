
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;

    cout<<"Size is : "<<v1.size()<<endl;
    cout<<"Capacity is : "<<v1.capacity()<<endl;

    vector<int> v2(5);

    cout<<"Size is : "<<v2.size()<<endl;
    cout<<"Capacity is : "<<v2.capacity()<<endl;

    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    vector<int> v3(5,7)  ;
    //it mean size=5 and each element value of array is 7

     cout<<"Size is : "<<v3.size()<<endl;
    cout<<"Capacity is : "<<v3.capacity()<<endl;

    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;
}