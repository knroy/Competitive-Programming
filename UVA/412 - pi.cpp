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
#define N 51

using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int n,arr[N],i,j;
    double all,up;
    while(scanf("%d",&n)==1 && n!=0)
    {
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
        all=(n*(n-1))/2,up=0;
        sort(arr,arr+n);
        for(i=n-1; i>=0; i--)
            for(j=i-1; j>=0; j--)
                if(gcd(arr[i],arr[j])==1)
                    up++;
        if(up==0)
            printf("No estimate for this data set.\n");
        else
            printf("%.6f\n",sqrt((6*all)/up));
    }
    return 0;
}
