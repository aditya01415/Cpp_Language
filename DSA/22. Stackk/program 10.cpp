#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void print(stack<int> st){
    stack<int> temp;
   while(st.size()>0){
    temp.push(st.top());
    st.pop();
   }
   cout<<endl;
   while(temp.size()>0){
    cout<<temp.top()<<" ";
     st.push(temp.top());
    temp.pop();
   
   }

}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

   
    stack<int> st1;
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);
    st1.push(50);

   //1 way via stack
    stack<int> temp1;
    while(st.size()>0){
        temp1.push(st.top());
        st.pop();
    }

    stack<int> temp2;
    while(temp1.size()>0){
        temp2.push(temp1.top());
        temp1.pop();
    }

    while(temp2.size()>0){
        st.push(temp2.top());
        temp2.pop();
    }
    
    // 2 way via array

    vector<int> temp;
    while(st1.size()>0){
         temp.push_back(st1.top());
         st1.pop();
    }

    for(auto el:temp){
        st1.push(el);
    }
    print(st);
    print(st1);
}