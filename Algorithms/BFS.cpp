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

vector<int> edge[100], cost[100];
const int infinity = 1000000000;

//edge[i][j] = jth node connected with i
//cost[i][j] = cost of that edge

void bfs(int source,int node)
{
    //KN Roy
    int d[100];
    for(int i=0; i<100; i++) d[i] = infinity;
    queue<int> q;
    q.push( source );
    d[ source ] = 0;

    while( !q.empty() )
    {
        int u = q.front();
        q.pop();
        int ucost = d[ u ];

        for(int i=0; i<edge[u].size(); i++)
        {
            int v = edge[u][i], vcost = cost[ u ][i] + ucost;
            if( d[v] > vcost )
            {
                d[v] = vcost;
                q.push( v );
            }
        }
    }

    for(int i=1; i<=node; i++)
        cout << d[i] << " ";
    cout << endl;

    return;
}

int main()
{
    int node,u,v,c,edges;
    int i,j;

    while(cin >> node >> edges)
    {
        for(int i=1; i<=edges; i++)
        {
            ///*** if You have given with different cost ***///

            cin >> u >> v >> c;
            edge[u].push_back(v);
            cost[u].push_back(c);

            /*

            // if You have unique cost for all the edges

            cin >> u >> v >> c;
            edge[u].push_back(v);
            cost[u].push_back(1);

            */

        }
        bfs(1,node);
    }
    return 0;
}
