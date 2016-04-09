#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#define matr 110

using namespace std;

int main()
{
    long long int mat[matr][matr];
    int n,i,j,t,l,mid,temp;
    cin >> t;
    for(l=1; l<=t; l++)
    {
        scanf(" N = %d",&n);
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                cin >> mat[i][j];
        }
        mid = n/2;
        temp = 0;
        for(i=0; i<=mid; i++)
        {
            for(j=0; j<n; j++)
            {
                if(mat[i][j]==mat[n-1-i][n-j-1] && mat[i][j]>=0 && mat[n-1-i][n-j-1]>=0)
                    continue;
                else
                {
                    temp = 1;
                    break;
                }
            }
        }
        if(temp==0)
            cout << "Test #"<< l << ": Symmetric." << endl;
        else
            cout << "Test #"<< l << ": Non-symmetric." << endl;
    }
    return 0;
}
