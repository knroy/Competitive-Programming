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
#define sz 55

using namespace std;

char str[sz][sz];
int color[sz][sz];

void DFS(int n,int m)
{

}

int main()
{
    In
    int n,m;
    while(scanf("%d %d",&m,&n)==2 && n+m)
    {
        for(int i=1;i<=n;i++)
            scanf("%s",str[i]);
        for(int i=1;i<=n;i++)
            printf("%s\n",str[i]);
    }
    return 0;
}
