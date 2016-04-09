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
    long long int n;
    long long int sqceil,sqfloor,r=0,c=0,ele,maxx,minn,middle;
    while(scanf("%lld",&n) && n)
    {
        sqceil = ceil(sqrt(n));
        sqfloor = sqceil - 1;
        minn = sqfloor * sqfloor + 1;
        maxx = sqceil * sqceil;
        middle = (maxx+minn)/2;
        r = 0,c = 0;
        if(sqceil%2==0)
        {
            if(n<middle)
            {
                r = sqceil;
                c = r-(middle-n);
            }
            else if(n>middle)
            {
                c = sqceil;
                r = c - (n-middle);
            }
            else
            {
                r = sqceil;
                c = r;
            }
        }
        else
        {
            if(n>middle)
            {
                r = sqceil;
                c = r-(n-middle);
            }
            else if(n<middle)
            {
                c = sqceil;
                r = c - (middle-n);
            }
            else
            {
                r = sqceil;
                c = r;
            }
        }
        printf("%lld %lld\n",c,r);
    }
    return 0;
}
