

#include<iostream>
using namespace std;
void print_maze_ways(int sr,int sc,int er,int ec,string str){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<str<<endl;
        return;
    }
    print_maze_ways(sr,sc+1,er,ec,str+'R');
    print_maze_ways(sr+1,sc,er,ec,str+'D');
}
void print_maze_ways2(int er,int ec,string str){
    if(er<0 || ec<0) return;
    if(er==1 && ec==1){
        cout<<str<<endl;
        return;
    }
    print_maze_ways2(er,ec-1,str+'R');
    print_maze_ways2(er-1,ec,str+'D');
}
int main(){
    print_maze_ways(0,0,2,2,"");
    cout<<endl;
    print_maze_ways2(3,3,"");
}