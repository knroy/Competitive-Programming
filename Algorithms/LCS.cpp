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

#define mx 1000

char a[mx],b[mx];
int c[mx][mx];

int maximum(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int lcs()
{
    int lena = strlen(a);
    int lenb = strlen(b);
    int i,j;
    for(i=1; i<=lena; i++)
    {
        for(j=1; j<=lenb; j++)
        {
            if(a[i-1]==b[j-1])
                c[i][j] = c[i-1][j-1]+1;
            else
                c[i][j] = maximum(c[i][j-1],c[i-1][j]);
        }
    }
    return c[lena][lenb];
}

void printSolution()
{
    string str  = "";

}

int main()
{
    int m;
    while(gets(a) && gets(b))
    {
        m = lcs();
        printf("%d\n",m);
        memset(c,0,sizeof(c));
    }
    return 0;
}

