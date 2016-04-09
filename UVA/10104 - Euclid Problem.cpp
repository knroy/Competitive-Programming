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

void extended_euclid(int A,int B)
{
    int m,p,q,a,b;
    int x=1,y=0;
    int u=0,v=1;
    a = A,b = B;
    while(b!=0)
    {
        m = a%b;
        q = a/b;
        x = x - (u*q);
        y = y - (v*q);
        swap(x,u);
        swap(y,v);
        a = b;
        b = m;
    }
    printf("%d %d %d\n",x,y,a);
}

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
        extended_euclid(a,b);
    return 0;
}
