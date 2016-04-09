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

int main()
{
    char str[2000];
    int h=0,m=0,s=0,v=0,nv=0,n;
    double total=0,f1=0,f2=0;
    while(gets(str))
    {
        n = sscanf(str,"%d:%d:%d %d",&h,&m,&s,&nv);
        f1 = h*1.0 + m/60.0 + s/3600.0;
        total += (f1-f2)*v;
        if(n==3)
            printf("%02d:%02d:%02d %.2lf km\n",h,m,s,total);
        else if(n==4)
            v = nv;
        f2 = f1;
    }
    return 0;
}
