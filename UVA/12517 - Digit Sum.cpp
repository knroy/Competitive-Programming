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
    long long m,n,sum,i,x;
    while(scanf("%lld %lld",&m,&n) && m+n!=0)
    {
        sum = 0;
        for(i=m; i<=n; i++)
        {
            x = i;
            while(x!=0)
            {
                sum += x%10;
                x = x/10;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
