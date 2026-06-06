

#include<iostream>
using namespace std;
int maze_ways(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int right_ways=maze_ways(sr,sc+1,er,ec);
    int down_ways=maze_ways(sr+1,sc,er,ec);
    return right_ways+down_ways;
}
int maze_ways2(int er,int ec){
    if(er<0 || ec<0) return 0;
    if(er==1 && ec==1) return 1;
    int right_ways=maze_ways2(er,ec-1);
    int down_ways=maze_ways2(er-1,ec);
    return right_ways+down_ways;
}
int main(){
    cout<<maze_ways(0,0,4,4)<<endl;
    cout<<maze_ways2(5,5);
}