/*
Ques : Print the table of 19.
*/

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << 19 * i << endl;
    }

    cout<<"--------------------------"<<endl;

   for(int i=19;i<=190;i+=19){
    cout<<i<<endl;
   }

   cout<<"--------------------------"<<endl;

    for(int i=1;i<=190;i++){
        if(i%19==0) cout<<i<<endl;
        
    }

}

