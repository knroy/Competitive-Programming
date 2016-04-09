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

int N, ld[10010];

int PTwo(int N)
{
    int T[]= {6,2,4,8};
    if(N==0)
        return 1;
    return T[N%4];
}

int Lnd(int N)
{
    int A[]= {1,1,2,6,4};
    if(N<5)
        return A[N];
    return (PTwo(N/5)*Lnd(N/5)*Lnd(N%5))%10;
}

void lastdigitfact()
{
    for(int i=0; i<=10009; i++)
    {
        ld[i] = Lnd(i);
    }
}

int main()
{
    lastdigitfact();
    while(scanf("%d", &N) == 1)
    {
        printf("%5d -> %d\n", N, ld[N]);
    }
}

