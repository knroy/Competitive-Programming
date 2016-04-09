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


map<int, vector<int> > mp;

void nodeCheck(int node,int ttl)
{
    int cnt = 0;
    int crr_node = node;
    int crr_ttl = ttl;
    //ttl = 1;
    map<int, vector<int> > :: iterator iter;
    map<int,int> tmp_mp;
    vector <int> V;

    while(ttl--)
    {
        if(mp.find(node)!=mp.end()){
            V = mp[node];
            int sz = V.size();
            for(int i=0;i<sz;i++)
            {

            }
            tmp_mp[node] = 0;
        }
    }
}

int main()
{
    In
    int n;
    int i,j;
    int u,v,r,c;
    int z = 10;
    while(scanf("%d",&n) && n)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d %d",&u,&v);
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        map<int, vector<int> > :: iterator iter;
        while(scanf("%d %d",&r,&c) && r+c)
        {
            nodeCheck(r,c);
        }

        mp.clear();
    }
    return 0;
}
