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

#define MM 50005

using namespace std;

vector <vector <int > > vec;
vector <int> row;

int rnk[MM],parent[MM],flag[MM];

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
    if(x!=parent[x])
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

void UR(int N,int E,int Cse)
{
    make_set(N);
    memset(flag,0,sizeof(flag));
    int u,v,cnt=0;
    for(int i = 0; i<E && cnt < N-1; i++)
    {
        u = vec[i][0];
        v = vec[i][1];
        if(find_set(u)!=find_set(v))
        {
            Union(find_set(u),find_set(v));
            flag[i] = true;
            cnt++;
        }
    }
    cnt = 0;
    for(int i=1; i<=N; i++)
        if(i == parent[i])
            cnt++;
    printf("Case %d: %d\n",Cse,cnt);
    return;
}

int main()
{
    //In
    int n,j=1,u,v,i,m;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(m==0 && n==0)
            break;
        for(i=1; i<=m; i++)
        {
            row.clear();
            scanf("%d %d",&u,&v);
            row.push_back(u);
            row.push_back(v);
            vec.push_back(row);
        }
        UR(n,m,j);
        j++;
        vec.clear();
    }
    return 0;
}
