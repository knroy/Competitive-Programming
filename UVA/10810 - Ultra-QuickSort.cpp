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
#define MEX 500005

using namespace std;
long long arr[MEX],flag,LR[MEX],RR[MEX];

void merges(int l,int m,int r)
{
    int i,j,h;
    for(i=l; i<=m; i++)
        LR[i] = arr[i];
    for(i=m+1; i<=r; i++)
        RR[i] = arr[i];
    j = m+1;
    h = l;
    while(l<=m && j<=r)
    {
        if(LR[l] <= RR[j])
        {
            arr[h] = LR[l];
            l++;
        }
        else
        {
            arr[h] = RR[j];
            j++;
            flag += m - l + 1;
        }
        h++;
    }
    while(l<=m)
    {
        arr[h] = LR[l];
        h++;
        l++;
    }
    while(j<=r)
    {
        arr[h] = RR[j];
        h++;
        j++;
    }
}

void mergesort(int low,int high)
{
    if(low < high)
    {
        int q = (low+high)/2;
        mergesort(low,q);
        mergesort(q+1,high);
        merges(low,q,high);
    }
}

int main()
{
    int n,i,j;
    while(scanf("%d",&n) && n)
    {
        for(i=0; i<n; i++)
            scanf("%lld",&arr[i]);
        mergesort(0,n-1);
        printf("%lld\n",flag);
        flag = 0;
    }
    return 0;
}
