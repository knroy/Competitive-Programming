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
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);
#define MAX 500

using namespace std;
int cnt=0,n;
char color[MAX*MAX+1];

void dfs_visit(int g[MAX][MAX],int u)
{
    int v;
    color[u]='g';
    for(v=0; v<n; v++)
    {
        if(g[u][v]==1)
        {
            if(color[v]=='w')
            {
                dfs_visit(g,v);
            }
        }
    }
}

void dfs(int g[MAX][MAX])
{
    int u;
    for(u=0; u<n; u++)
    {
        color[u]='w';
    }
    for(u=0; u<n; u++)
    {
        if(color[u]=='w')
        {
            dfs_visit(g,u);
            cnt++;
        }
    }
}

int main()
{
    In
    int g[MAX][MAX];
    int tcase,i,j,flag=0;
    char ch,str[10];
    scanf("%d",&tcase);
    getchar();
    getchar();
    while(tcase--)
    {
        if(flag>0)
            printf("\n");
        flag++;
        scanf("%c",&ch);
        getchar();
        n = ch - 64;
        while(gets(str) && strlen(str)!=0)
        {
            g[str[0]-65][str[1]-65] = 1;
            g[str[1]-65][str[0]-65] = 1;
        }
        dfs(g);
        printf("%d\n",cnt);
        cnt = 0,n=0;
        memset(color,'\0',sizeof(color));
        memset(g,0,sizeof(g));
    }
    return 0;
}
