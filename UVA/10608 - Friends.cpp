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
#define m 500005
#define MN 30005

using namespace std;

int rnk[m],parent[m],flag[m],overide[m];

struct frnds
{
    int u,v;
    void udp(int _u,int _v)
    {
        u = _u;
        v = _v;
    }
} frnd[MN];

void make_set(int n)
{
    for(int i=0; i<=n; i++)
    {
        parent[i] = i;
        rnk[i] = 0;
    }
    return;
}

int find_set(int x)
{
    if( x != parent[x])
        parent[x] = find_set(parent[x]);
    return parent[x];
}

void Union(int a,int b)
{
    if(rnk[a] > rnk[b])
        parent[b] = a;
    else
        parent[a] = b;
    if(rnk[a]==rnk[b])
        rnk[a]++;
    return;
}

int counting(int x)
{
    int l = parent[x];
    if(x!=l)
    {
        l = counting(l);
    }
    return l;
}

void UF(int N,int E)
{
    make_set(N);
    memset(flag,0,sizeof(flag));
    memset(overide,0,sizeof(overide));
    int u,v,cost,total_cost = 0,cnt=0;
    for(int i = 1; i<=E && cnt < N-1; i++)
    {
        u = frnd[i].u;
        v = frnd[i].v;
        if(find_set(u)!=find_set(v))
        {
            Union(find_set(u),find_set(v));
            flag[i] = true;
            cnt++;
        }
    }
    int X = 0;
    for(int i=0; i<=N; i++)
    {
        int l =  counting(i);
        overide[l]++;
        if(overide[l]>X)
            X = overide[l];
    }
    printf("%d\n",X);
    return;
}


int main()
{
    //In
    int i,j,n;
    int node,e;
    int ua,uv,ucost;
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        scanf("%d %d",&node,&e);
        {
            for(i=1; i<=e; i++)
            {
                scanf("%d %d",&ua,&uv);
                frnd[i].udp(ua,uv);
            }
            UF(node,e);
        }
    }
    return 0;
}
