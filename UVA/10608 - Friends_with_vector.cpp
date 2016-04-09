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
#define MM 500005
#define MN 30005

using namespace std;

int parent[MN];

int main()
{
    int i,j,n,N,E,u,v;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&N,&E);
        for(j=0;j<E;j++)
        {
            scanf("%d %d",&u,&v);
            parent[v] = u;
        }
    }
    return 0;
}
