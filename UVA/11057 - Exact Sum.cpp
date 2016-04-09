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
#define MAXX 10010

using namespace std;

int main()
{
    long long n,i,j,m,p,q,temp;
    while(scanf("%lld",&n)==1)
    {
        long long int INF=100000000,arr[MAXX];
        for(i=0; i<n; i++)
        {
            scanf("%lld",&arr[i]);
        }
        scanf("%lld",&m);
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr[i]+arr[j]==m && abs(arr[i]-arr[j])<INF)
                {
                    INF = abs(arr[i]-arr[j]);
                    p = arr[i];
                    q = arr[j];
                }
            }
        }
        if(p>q)
        {
            temp = p;
            p = q;
            q = temp;
        }
        printf("Peter should buy books whose prices are %lld and %lld.\n\n",p,q);
    }
    return 0;
}
