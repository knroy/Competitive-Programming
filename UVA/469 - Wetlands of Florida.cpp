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
#define MEX 450
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);

using namespace std;

int color[MEX][MEX],i,j;
int cnt,rln,cln;
vector <char> g[MEX];
queue <int> Q;

void bfs(int r,int c)
{
    cnt = 1;
    color[r][c] = 1;
    Q.push(r);
    Q.push(c);
    while(!Q.empty())
    {
        int k;
        int nr = Q.front();
        Q.pop();
        int nc = Q.front();
        Q.pop();
        int cx[8] = {-1,-1,0,1,1,1,0,-1};
        int cy[8] = {0,1,1,1,0,-1,-1,-1};
        for(k = 0; k<8; k++)
        {
            int x = nr + cx[k];
            int y = nc + cy[k];
            if(x>=0 && x<rln && y>=0 && y<cln)
            {
                if(g[x][y]=='W' && color[x][y]==0)
                {
                    cnt++;
                    color[x][y] = 1;
                    Q.push(x);
                    Q.push(y);
                }
            }
        }
    }
    memset(color,0,sizeof(color));
}

int main()
{
    int t,k,l,m,tcase;
    char str[MEX];
    scanf("%d\n\n",&tcase);
    for(t=1; t<=tcase; t++)
    {
        rln = 0;
        while(gets(str))
        {
            if(str[0]=='\0')
                break;
            else if(str[0]=='L' || str[0]=='W')
            {
                cln = strlen(str);
                for(j=0; j<cln; j++)
                {
                    g[rln].push_back(str[j]);
                }
                rln++;
            }
            else if(str[0]>='0' && str[0]<='9')
            {
                sscanf(str,"%d %d",&l,&m);
                int x = l - 1;
                int y = m - 1;
                if(g[x][y]=='W' && color[x][y]==0)
                {
                    bfs(x,y);
                    printf("%d\n",cnt);
                }
                else
                {
                    printf("0\n");
                }
            }
        }
        if(t!=tcase)
            printf("\n");
        for(i=0; i<MEX; i++)
            g[i].clear();
        cln = 0;
    }
    return 0;
}
