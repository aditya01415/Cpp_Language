

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

    int tne=m*n;
    int count=0;

    while(minR<=maxR || minC<=maxC){
        
        for(int i=minC;i<=maxC && count<tne;i++){
            cout<<matrix[minR][i]<<" ";
            count++;
        }
        minR++;

        for(int i=minR;i<=maxR && count<tne;i++){
            cout<<matrix[i][maxC]<<" ";
            count++;
        }
        maxC--;

        for(int i=maxC;i>=minC && count<tne;i--){
           cout<<matrix[maxR][i]<<" ";
           count++;
        }
        maxR--;

        for(int i=maxR;i>=minR && count<tne;i--){
          cout<<matrix[i][minC]<<" ";
          count++;
        }
        minC++;

    }


}