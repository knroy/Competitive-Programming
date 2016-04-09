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
#define sz 10

using namespace std;

int color[sz][sz];
int dis[sz][sz];

queue <int> Q;

int bfs(int m,int n,int x,int y)
{
    memset(color,0,sizeof(color));
    memset(dis,0,sizeof(dis));

    Q.push(m);
    Q.push(n);

    dis[m][n] = 0;
    color[m][n] = 1;

    while(!Q.empty())
    {
        int r = Q.front();
        Q.pop();
        int c = Q.front();
        Q.pop();

        int rx[]= {1,1,-1,-1,2,2,-2,-2};
        int ry[]= {2,-2,2,-2,1,-1,1,-1};

        if(r == x && c == y)
            break;

        for(int i=0; i<8; i++)
        {
            int nr = r + rx[i];
            int nc = c + ry[i];
            if(nr>=0 && nr<8 && nc>=0 && nc<8 && color[nr][nc]!=1)
            {
                dis[nr][nc] = dis[r][c] + 1;
                color[nr][nc]=1;
                Q.push(nr);
                Q.push(nc);
            }
        }
    }
    return dis[x][y];
}

int main()
{
    char a,b,str[10];
    int c,d,m,n,x,y;
    while(scanf("%c%d %c%d",&a,&c,&b,&d)==4)
    {
        getchar();
        n = (a - 'a');
        m = c-1;
        y = (b - 'a');
        x = d-1;
        int dist = bfs(m,n,x,y);
        cout << "To get from " << a << c << " to " <<  b << d << " takes " << dist << " knight moves." << endl;
        while(!Q.empty())
        {
            Q.pop();
        }
    }
    return 0;
}
