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

bool status[1100002];

void siv()
{
    int i,j;
    int N=1000000;
    int sq=sqrt(N);
    for(i=4; i<=N; i+=2) status[i]=1;
    for(i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            for(j=i*i; j<=N; j+=i) status[j]=1;
        }
    }
    status[1]=1;
}

int main()
{
    siv();
    long long int n,t,mt,i,l,k;
    while(scanf("%lld",&n) && n)
    {
        n = abs(n);
        l = sqrt(n);
        k = 2;
        t = 0;
        mt = 0;
        while(k<=l)
        {
            if(status[k]==0)
            {
                if(n%k==0)
                {
                    if(mt!=k)
                    {
                        mt = k;
                        t++;
                    }
                    n = n/k;
                    if(n<=1)
                        break;
                }
                else
                    k++;
            }
            else
                k++;
            if(k>=1100002)
                break;
        }
        if(n!=1 && mt!= n)
        {
            mt = n;
            t++;
        }
        if(t>1)
            printf("%lld\n",mt);
        else
            printf("-1\n");
    }
    return 0;
}
