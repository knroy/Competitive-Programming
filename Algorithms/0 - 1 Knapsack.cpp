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
#define sz 100
#define sz_w 1000

using namespace std;

int CAP;
int weight[sz+1];
int cost[sz+1];
int dp[sz+1][sz_w+1];
int n;

void init()
{
    MEM(dp,-1);
}

int func(int i,int w)
{
    if(i == n)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];
    int prof1 = 0,prof2 = 0;
    if(w+weight[i]<=CAP)
        prof1 = cost[i] + func(i+1,w+weight[i]);
    prof2 = func(i+1,w);
    dp[i][w] = MAX(prof1,prof2);
    return dp[i][w];
}

int main()
{
    init();
    cin >> n >> CAP;
    for(int i=0; i<n; i++)
    {
        cin >> weight[i] >> cost[i];
    }
    cout << func(0,0) << endl;
    return 0;
}
