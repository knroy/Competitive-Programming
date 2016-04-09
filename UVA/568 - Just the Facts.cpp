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

int N, ld[10010];

void lnd()
{
    int n= 10000;
    long long m = 1;
    for(int i = 1; i <= n; i++)
    {
        m = (m * i);
        while(m % 10 == 0)
            m /= 10;
        m = m % 100000;
        ld[i] = m % 10;
    }
}

int main()
{
    lnd();
    while(scanf("%d", &N) == 1)
    {
        printf("%5d -> %d\n", N, ld[N]);
    }
}
