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

int w[20][20];
int n;
int dp[(1<<15)+2];

int Set(int N,int pos)
{
    return N=N | (1<<pos);
}
int reset(int N,int pos)
{
    return N= N & ~(1<<pos);
}
bool check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}

int call(int mask)
{
    if(mask == (1<<15)-1)
        return 0;
    if(dp[mask]!=-1)
        return dp[mask];
    int mn = 1<<28;
    for(int i=0; i<n; i++)
    {
        if(check(mask,i)==0)
        {
            int price = w[i][i];
            for(int j=0; j<n; j++)
            {
                if(i!=j && check(mask,j)!=0)
                {
                    price+= w[i][j];
                }
            }
            int ret = price + call(Set(mask,i));
            mn = MIN(mn,ret);
        }
    }
    return dp[mask] = mn;
}

int main()
{
    MEM(dp,-1);
    cin >> n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> w[i][j];
    cout << call(0) << endl;
    return 0;
}
