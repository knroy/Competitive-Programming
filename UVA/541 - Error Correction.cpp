#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cctype>
#define MEM(a,b) memset((a),(b),sizeof(a))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);
#define sz 105

using namespace std;
int mat[sz][sz];
int row[sz];
int col[sz];
vector<int> corr;

void parity(int n)
{
    for(int j=0; j<n; j++)
        if(row[j]%2!=0)
            corr.push_back(j);
    for(int j=0; j<n; j++)
        if(col[j]%2!=0)
            corr.push_back(j);
}
int AfterParity(int n,int l,int h)
{
    MEM(row,0);
    MEM(col,0);
    int err = 0;
    if(mat[l][h]==0)
        mat[l][h]=1;
    else
        mat[l][h]=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            row[i] += mat[i][j];
            col[j] += mat[i][j];
        }
    for(int j=0; j<n; j++)
    {
        if(row[j]%2!=0)
            err++;
        if(col[j]%2!=0)
            err++;
    }
    return err;
}

int main()
{
    int n;
    while(scanf("%d",&n) && n)
    {
        MEM(row,0);
        MEM(col,0);
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                scanf("%d",&mat[i][j]);
                row[i] += mat[i][j];
                col[j] += mat[i][j];
            }
        parity(n);
        int ln = corr.size();
        if(ln==0)
            cout << "OK" << endl;
        else if(ln>2)
            cout << "Corrupt" << endl;
        else
        {
            int l = corr[0];
            int h = corr[1];
            corr.clear();
            int chk = AfterParity(n,l,h);
            if(chk==0)
                cout << "Change bit (" << l+1 << "," << h+1 << ")" << endl;
            else
                cout << "Corrupt" << endl;
        }
    }
    return 0;
}
