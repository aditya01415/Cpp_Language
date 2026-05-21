/*
Ques : Column wise printing
*/

#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter the number of rows : ";
    cin >> m;
    int n;
    cout << "Enter the number of columns : ";
    cin >> n;

    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;

    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            if(j%2==0)
            cout<<a[i][j]<<" ";
            else {
               for(int k=m-1;k>=0;k--){
                  cout<<a[k][j]<<" ";
               }
               break;
                
                
            }

            
            
        }
    }
}