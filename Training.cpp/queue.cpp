#include <iostream>
#include<vector>
using namespace std;
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    cout<<"Front element: "<<q.front()<<endl;
    q.pop();
}