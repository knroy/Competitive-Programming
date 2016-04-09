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
#define MEX 1000
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);

using namespace std;

int color[MEX][200];
vector <char> g[MEX];
queue <int> Q;
char ch[MEX],l;
int ln;

void bfs(int r,int c)
{
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
        int cx[4] = {-1,0,0,1};
        int cy[4] = {0,-1,1,0};
        for(k = 0; k<4; k++)
        {
            int x = nr + cx[k];
            int y = nc + cy[k];
            if(x>=0 && x<ln && y>=0 && y <g[x].size())
                if(g[x][y]==' ' && color[x][y]==0)
                {
                    color[x][y] = 1;
                    g[x][y] = l;
                    Q.push(x);
                    Q.push(y);
                }
        }
    }
}

int main()
{
    In
    char str[100];
    int len,i=0,j,k,flag=0,ccn=0;
    while(gets(str))
    {
        len = strlen(str);
        if(str[0]==' ')
            flag = 0;
        if(flag==0)
        {
            for(j=0; j<len; j++)
            {
                if(str[j]!=' ')
                {
                    ch[ccn] = str[j];
                    ccn++;
                    flag = 1;
                    break;
                }
            }
        }
        for(j=0; j<len; j++)
            g[i].push_back(str[j]);
        i++;
    }
    ln = i;
    ccn = 0;
    for(j=0; j<i; j++)
    {
        for(k=0; k< g[j].size(); k++)
        {
            if(g[j][k]=='_')
            {
                ccn++;
                break;
            }
            if(g[j][k]!= ch[ccn] &&  g[j][k]!= ' ' && g[j][k]!='_' && color[j][k]==0)
            {
                l = g[j][k];
                bfs(j,k);
            }
        }
    }
    for(j=0; j<i; j++)
    {
        for(k=0; k< g[j].size(); k++)
        {
            printf("%c",g[j][k]);
        }
        printf("\n");
    }
    return 0;
}


