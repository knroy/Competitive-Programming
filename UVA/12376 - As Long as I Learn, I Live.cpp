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

vector<int> cost;
vector<int> G[110];
vector<int> edges[110];

void solveItMan(int source,int cnt)
{
    if(edges[source].size()==0){
        cout << cnt << " " << source << endl;
        return;
    }else{
        int next = edges[source][0];
        cnt = cnt + G[source][0];
        solveItMan(next,cnt);
    }
}

int main()
{
    int n,u,v,c,r;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d",&u,&v);
        for(int j=0; j<u; j++)
        {
            scanf("%d",&c);
            cost.push_back(c);
        }
        for(int j=0; j<v; j++)
        {
            scanf("%d %d",&r,&c);
            if(G[r].size()>0)
            {
                if(G[r][0]<cost[c])
                {
                    G[r][0] = cost[c];
                    edges[r][0] = c;
                }
            }
            else
            {
                G[r].push_back(cost[c]);
                edges[r].push_back(c);
            }
        }
        cout << "Case " << i << ": ";
        solveItMan(0,0);
        cost.clear();
        for(int j=0;j<110;j++){
            G[j].clear();
            edges[j].clear();
        }
    }
    return 0;
}
