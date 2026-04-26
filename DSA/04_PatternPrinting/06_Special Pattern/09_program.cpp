

/*
Q20. Print the following pattern:
********
***  ***
**    **
*      *
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int nsp1=n-1,nsp2=n-1,nst=1;
    for(int j=1;j<=2*n-1;j++){
                cout<<"* ";
               }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
               
       
                for(int k=1;k<=nsp1;k++){
                    cout<<"* ";
                }
                nsp1--;

                for(int p=1;p<=nst;p++){
                    cout<<"  ";
                }
                nst+=2;

                for(int q=1;q<=nsp2;q++){
                    cout<<"* ";
                }
                nsp2--;
              
        
        cout<<endl;
    }
}