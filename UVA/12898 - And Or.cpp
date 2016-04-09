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
#define sz 31

using namespace std;


int main()
{
    long long t,a,b,i,x,rAnd,rOr,t1,t2;
    int tcase,j;
    scanf("%d",&tcase);
    for(j=1; j<=tcase; j++)
    {
        i=0;
        rAnd = 0;
        rOr = 0;
        scanf("%lld %lld",&a,&b);
        t1 = a;
        t2 = b;
        while(t1!=0)
        {
            t = t1 & 1;
            x = t1;
            while(t==1 && t1<t2)
            {
                x = x + 1;
                t = x & 1;
            }
            t1 >>= 1;
            t2 >>= 1;
            rAnd += (1LL << i)*t;
            i++;
        }
        i = 0;
        while(b!=0)
        {
            t = b & 1;
            x = b;
            while(t==0 && x>a)
            {
                x = x - 1;
                t = x & 1;
            }
            b >>=1;
            a >>=1;
            rOr += (1LL << i)*t;
            i++;
        }
        printf("Case %d: %lld %lld\n",j,rOr,rAnd);
    }
    return 0;
}
