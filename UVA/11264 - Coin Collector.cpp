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

#define MM 3000

using namespace std;

long long DP[MM];

void coinChange()
{
    int i;
    memset(DP,0,sizeof(DP));
    DP[0] = 1;
    int coins[]= {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(coins)/sizeof(coins[0]),sum=0;
    for(i=0;i<sz;i++)
        sum += coins[i];
    for(int j=0; j<sz; j++)
    {
        for(i=0; i<sum; i++)
        {
            if(DP[i]!=0)
                DP[i+coins[j]] = DP[i] + DP[i+coins[j]];
        }
    }
    for(i=0;i<=sz;i++)
        cout << DP[i] << " ";
}

int main()
{
    coinChange();
    int n;

    /*
    while(scanf("%d",&n)==1)
    {

    }*/
    return 0;
}

