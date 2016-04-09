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

#define inf 1<<28
int mat[][10]=
{
    {-1, 2, 5},
    {4, -2, 3},
    {1 , 2 ,10,}
};
int dp[10][10];
int r=3,c=3;

int rockClimb(int i,int j)
{
    if((i>=0 && i<r) && (j>=0 && j<c))
    {
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ret = -inf;
        ret = MAX(ret,rockClimb(i+1,j)+mat[i][j]);
        ret = MAX(ret,rockClimb(i+1,j-1)+mat[i][j]);
        ret = MAX(ret,rockClimb(i+1,j+1)+mat[i][j]);
        return dp[i][j] = ret;
    }
    else return 0;
}

int main()
{
    MEM(dp,-1);
    cout << rockClimb(0,0) << endl;
    return 0;
}
