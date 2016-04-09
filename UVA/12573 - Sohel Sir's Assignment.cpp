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
    In
    Out
    long long unsigned x,y,m,sq,j,tmp;
    int t,i;
    bool flag;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%llu %llu",&x,&y);
        if(y-2==0)
        {
            printf("1\n");
            continue;
        }
        if(x==y-2)
        {
            printf("F\n");
            continue;
        }
        if(x==y)
        {
            printf("Impossible\n");
            continue;
        }
        tmp = x-y+2;
        sq = ceil(sqrt(tmp))+1;
        flag = 0;
        j = 2;
        while(j<sq+1)
        {
            if((x%j)== y-2)
            {
                printf("%llu\n",j);
                flag = 1;
                break;
            }
            j++;
        }
        if(flag==0)
        {
            if((x%tmp)==(y-2))
                printf("%llu\n",tmp);
            else
                printf("Impossible\n");
        }
    }
    return 0;
}
