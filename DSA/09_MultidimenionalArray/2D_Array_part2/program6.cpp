

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout << "Enter the number of rows : ";
    cin >> m;
    int n;
    cout << "Enter the number of columns : ";
    cin >> n;

    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << endl;


    int minR=0;
    int minC=0;
    int maxR=m-1;
    int maxC=n-1;

    while(minR<=maxR || minC<=maxC){
        
        for(int i=minC;i<=maxC;i++){
            cout<<matrix[minR][i]<<" ";
        }
        minR++;

        if(minR>maxR || minC>maxC) break;
        for(int i=minR;i<=maxR;i++){
            cout<<matrix[i][maxC]<<" ";
        }
        maxC--;

         if(minR>maxR || minC>maxC) break;
        for(int i=maxC;i>=minC;i--){
           cout<<matrix[maxR][i]<<" ";
        }
        maxR--;

         if(minR>maxR || minC>maxC) break;
        for(int i=maxR;i>=minR;i--){
          cout<<matrix[i][minC]<<" ";
        }
        minC++;

    }


}