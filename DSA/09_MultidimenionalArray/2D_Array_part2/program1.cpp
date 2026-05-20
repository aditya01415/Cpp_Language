
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Details for 1 array " << endl;
    int m;
    cout << "Enter the number of rows : ";
    cin >> m;
    int n;
    cout << "Enter the number of columns : ";
    cin >> n;

     cout << "Enter Details for 2 array " << endl;
    int p;
        cout << "Enter the number of rows : ";
        cin >> p;
        int q;
        cout << "Enter the number of columns : ";
        cin >> q;

    if (p == n)
    {
        int a[m][n];
        cout << "Enter Element on array 1" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

       
        int b[p][q];
        cout << "Enter Element on array 2" << endl;

        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }

        int c[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < p; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        cout << "Multiplication of two matrix is : " << endl;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "This Multiplication on matrix is not possible";
    }
}