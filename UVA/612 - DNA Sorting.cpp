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

using namespace std;

int main()
{
    int t,n,m,j,l;
    string str[110];
    int mej[110];
    scanf("%d",&t);
    while(t--)
    {
        MEM(mej,0);
        scanf("%d %d",&n,&m);
        for(int i=0; i<m; i++)
        {
            cin >> str[i];
        }
        for(int i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                for(l=j+1; l<n; l++)
                {
                    if(str[i][j]>str[i][l])
                    {
                        mej[i]++;
                    }
                }
            }
        }
        for (int c = 0 ; c<m-1; c++)
        {
            for (int d = 0 ; d < m - c - 1; d++)
            {
                if (mej[d] > mej[d+1])
                {
                    int s = mej[d];
                    mej[d] = mej[d+1];
                    mej[d+1]= s;
                    string tmp = str[d];
                    str[d] = str[d+1];
                    str[d+1] = tmp;
                }
            }
        }
        for(int i=0; i<m; i++)
        {
            cout << str[i] << endl;
        }
        if(t!=0){
            cout << endl;
        }
    }
    return 0;
}
