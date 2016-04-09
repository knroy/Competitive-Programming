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
#define limit 10000000

using namespace std;
int dp[limit+5];

int totalSum(int n)
{
    int total = 0;
    while(n!=0)
    {
        int tmp = n % 10;
        total += tmp;
        n /= 10;
    }
    return total;
}

void sumDigitsUptoN()
{
    dp[0] = 0;
    for(int i=1; i<limit; i++)
    {
        dp[i] = dp[i-1] + totalSum(i);
    }
}

int main()
{
    sumDigitsUptoN();
    int n;
    while(cin >> n)
    {
        cout << dp[n] << endl;
    }
    return 0;
}

