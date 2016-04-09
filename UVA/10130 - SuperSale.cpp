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
#define sz_N 1005
#define sz_W 35

using namespace std;
int price[sz_N];
int weight[sz_N];
long long dp[sz_N][sz_W];
int n;
int CAP;

void init()
{
    MEM(dp,-1);
}

int ZeroKnapsack(int i,int w)
{
    if(i==n)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];
    long long prof1=0,prof2=0;
    if(w+weight[i]<=CAP)
        prof1 = price[i] + (ZeroKnapsack(i+1,w+weight[i]));
    prof2 = ZeroKnapsack(i+1,w);
    return dp[i][w] = MAX(prof1,prof2);
}

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> price[j] >> weight[j];
        }
        int G,tmp;
        long long total = 0;
        cin >> G;
        for(int j=0; j<G; j++)
        {
            init();
            cin >> CAP;
            total += ZeroKnapsack(0,0);
        }
        cout << total << endl;
    }
    return 0;
}
