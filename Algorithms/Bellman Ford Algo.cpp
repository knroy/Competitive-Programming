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
#define int__max 10000

using namespace std;


int Distance[100];
int node,vertx;


struct vertices
{
    int source,destination,cost;
    void sourceDestinationCost(int _source,int _destination,int _cost)
    {
        source = _source;
        destination = _destination;
        cost = _cost;
    }
} vertxx[100];

void Bellman_Ford(int src)
{
    bool yesOrNo = true;
    memset(Distance,int__max,sizeof(Distance));

    Distance[src] = 0;

    for(int i=1; i<node; i++)
    {
        for(int j=0; j<vertx; j++)
        {
            int u = vertxx[j].source;
            int v = vertxx[j].destination;
            int weight = vertxx[j].cost;
            if(Distance[u]+weight < Distance[v])
                Distance[v] = Distance[u]+weight;
        }
    }
    for(int j=0; j<vertx; j++)
    {
        int u = vertxx[j].source;
        int v = vertxx[j].destination;
        int weight = vertxx[j].cost;
        if(Distance[u]+weight < Distance[v])
        {
            yesOrNo = false;
            break;
        }
    }

    if(yesOrNo==true)
    {
        cout << "No Negative Cycle!!" << endl;
    }
    else
        cout << "Negative Cycle Available!!" << endl;

    for(int i=0; i<node; i++)
        cout << i << " " << Distance[i] << endl;
}

int main()
{

    cin >> node >> vertx;
    int i,j;
    int u,v,cost;
    for(int i=0; i<vertx; i++)
    {
        cin >> u >> v >> cost;
        vertxx[i].sourceDestinationCost(u,v,cost);
    }

    Bellman_Ford(0); // Here Zero is Source

    return 0;
}
