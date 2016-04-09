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
#define m 100

using namespace std;

int rnk[m],parent[m],flag[m];

struct frnds
{
    int u,v,cost;
    void udp(int _u,int _v, int _cost)
    {
        u = _u;
        v = _v;
        cost = _cost;
    }
} frnd[m];

bool comp(frnds p,frnds q)
{
    if(p.cost<q.cost)
        return true;
    return false;
}

void make_set(int n)
{
    for(int i=1; i<=n; i++)
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

void Kruskal(int N,int E)
{
    make_set(N);
    memset(flag,0,sizeof(flag));
    int u,v,cost,total_cost = 0,cnt=0;
    for(int i = 1; i<=E && cnt < N-1; i++)
    {
        u = frnd[i].u;
        v = frnd[i].v;
        cost = frnd[i].cost;
        if(find_set(u)!=find_set(v))
        {
            total_cost += cost;
            Union(find_set(u),find_set(v));
            flag[i] = true;
            cnt++;
        }
    }
    printf("MST COST = %d\n",total_cost);
    printf("frnds Used\n");
    for(int i=1; i<=E; i++)
    {
        if(flag[i]==true)
            printf("%d ---> %d\n",frnd[i].u,frnd[i].v);
    }
    return;
}


int main()
{
    int i,j,G[m][m]= {0};
    int node,e;
    int ua,uv,ucost;
    while(cin >> node >> e)
    {
        for(i=1; i<=e; i++)
        {
            cin >> ua >> uv >> ucost;
            frnd[i].udp(ua,uv,ucost);
        }
        sort(&frnd[1],&frnd[e],comp);
        Kruskal(node,e);
    }
    return 0;
}
