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
int parent[210];

void init(int e)
{
    for(int i=0; i<=e; i++)
    {
        parent[i] = i;
    }
    return;
}


int parentAncient(int x)
{
    if(x!= parent[x])
        x = parentAncient(parent[x]);
    return parent[x];
}

int main()
{
    In
    Out
    int n,e,u,v;
    int start;
    while(scanf("%d",&n) && n)
    {
        scanf("%d",&e);
        int cnt=0,tmp1,tmp2;
        int flag = 0;
        init(e);
        for(int i=0; i<e; i++)
        {
            scanf("%d %d",&u,&v);
            tmp1 = parentAncient(u);
            tmp2 = parentAncient(v);
            if(flag==0)
            {
                if(tmp1 == tmp2)
                    flag = 1;
                else if(tmp1!=tmp2)
                {
                    parent[v] = u;
                    cnt++;
                }
            }
        }
        prnt(e);
        if(flag==1 && cnt!=e)
            cout << "NOT BICOLORABLE." << endl;
        else
            cout << "BICOLORABLE." << endl;
    }
    return 0;
}
