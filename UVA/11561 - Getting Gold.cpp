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

char grid[sz][sz];
bool Color[sz][sz];
int cnt = 0,m,n;
queue <int> Q;


bool trapcheck(int x,int y)
{
    int xx[]= {1,-1,0,0};
    int yy[]= {0,0,1,-1};

    for(int i=0; i<4; i++)
    {
        int nx = x+xx[i];
        int ny = y+yy[i];
        if(nx>0 && ny>0 && nx<n && ny<m && grid[nx][ny]=='T')
            return false;
    }
    return true;
}

void goldCollector(int x,int y)
{
    memset(Color,0,sizeof(Color));

    Q.push(x);
    Q.push(y);
    Color[x][y] = 1;
    int x1,y1;
    while(!Q.empty())
    {
        x1 = Q.front();
        Q.pop();
        y1 = Q.front();
        Q.pop();


        int xx[]= {1,-1,0,0};
        int yy[]= {0,0,1,-1};
        if(trapcheck(x1,y1))
        {
            for(int i=0; i<4; i++)
            {
                int nx = x1+xx[i];
                int ny = y1+yy[i];

                if(grid[nx][ny]=='G' && Color[nx][ny]!=1)
                {
                    cnt++;
                    Q.push(nx);
                    Q.push(ny);
                }
                else if(grid[nx][ny]=='.' && Color[nx][ny]!=1)
                {
                    Q.push(nx);
                    Q.push(ny);
                }
                Color[nx][ny]=1;
            }
        }

    }

    cout << cnt << endl;
    return;
}

int main()
{
    int s1,s2,i,j;
    while(scanf("%d %d",&m,&n)==2)
    {
        getchar();
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                scanf("%c",&grid[i][j]);
                if(grid[i][j]=='P')
                {
                    s1 = i;
                    s2 = j;
                }
            }
            getchar();
        }
        goldCollector(s1,s2);
        cnt = 0;
    }
    return 0;
}
