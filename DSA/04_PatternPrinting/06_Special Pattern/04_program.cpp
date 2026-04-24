/*
Ques : Print the given pattern

     1

   1 2 1

 1 2 3 2 1

1 2 3 4 3 2 1

*/


#include<iostream>
using namespace std;
int main(){
   int n;
    cout<<"Enter a number : ";
    cin>>n;
    int nsp=n-1,nst=1;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        nsp--;
        for(int p=1;p<=i;p++){
            cout<<p<<" ";
        }
        a=i-1;
        for(int q=1;q<=i-1;q++){ 
            cout<<a<<" ";
             a--;
        }
       
        cout<<endl;
    }
}
    
