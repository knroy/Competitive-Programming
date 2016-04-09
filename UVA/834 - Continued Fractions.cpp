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
    long long int a,b,a1,b1;
    int i;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        a1 = a/b;
        if(a%b==0)
            printf("[%lld",a1);
        else
            printf("[%lld;",a1);
        i = 0;
        while(b>1)
        {
            b1 = a - (a1*b);
            a = b;
            b = b1;
            if(b==0)
                break;
            if(i>0)
                printf(",");
            i++;
            a1 = a/b;
            printf("%lld",a1);
        }
        printf("]\n");
    }
    return 0;
}
