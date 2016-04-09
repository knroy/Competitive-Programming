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
#define m 20000

using namespace std;

map <string,int> mp;
int rnk[m],parent[m],flag[m];
int maxf;

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

int result_finder(int x,int y,int re)
{
    if(x==y)
        return re;
    int temp = frnd[x].cost;
    x = frnd[x].v;
    if(re > temp)
        re = temp;
    result_finder(x,y,re);
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
            printf("%d ---> %d ---> %d\n",frnd[i].u,frnd[i].v,frnd[i].cost);
    }
    return;
}

int main()
{
    int n,r,x;
    int s,d,c,cost,t1,t2;
    string r1,r2;
    while(scanf("%d %d",&n,&r)==2)
    {
        getchar();
        if(n==0 && r==0)
            break;
        x = 1;
        for(int i=1; i<=r; i++)
        {
            cin >> r1 >> r2 >> cost;
            if(mp.find(r1)==mp.end())
            {
                mp[r1] = x++;
            }
            if(mp.find(r2)== mp.end())
            {
                mp[r2] = x++;
            }
            t1 = mp[r1],t2=mp[r2];
            frnd[i].udp(t1,t2,cost);
        }
        cin >> r1 >> r2;
        s = mp[r1];
        d = mp[r2];
        if(d<s)
            swap(s,d);
        sort(&frnd[1],&frnd[r+1],comp);
        Kruskal(n,r);
        cout << "Relation Between : " << s << " & " << d << "\n";
        int result = result_finder(s,d,200005);
        cout << result << endl;
        mp.clear();
    }
    return 0;
}
/*
cin >> r1 >> r2;
        s = mp[r1];
        d = mp[r2];
        sort(&frnd[1],&frnd[r+1],comp);
        Kruskal(n,r);
        cout << "Relation Between : " << s << " & " << d << "\n";
        //result_finder(mp[r1],mp[r2],)
        */

