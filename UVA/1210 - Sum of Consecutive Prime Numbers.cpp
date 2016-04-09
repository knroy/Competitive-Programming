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
#define i64 long long unsigned
#define sz 10005

using namespace std;

bool status[sz];
int cons[sz];

void siv()
{
    int i,j;
    int N=sz;
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
    status[0]=1;
}

void gen()
{
    MEM(cons,0);
    i64 x;
    for(int i=sz-1; i>=2; i--)
    {
        if(status[i]==0)
        {
            x = i;
            cons[x]++;
            for(int j=i-1; j>=2; j--)
            {
                if(status[j]==0)
                {
                    x += j;
                    if(x<sz)
                        cons[x]++;
                    else
                        break;
                }
            }
        }
    }
    return;
}

int main()
{
    siv();
    gen();
    int n;
    while(cin >> n && n)
    {
        cout << cons[n] << endl;
    }
    return 0;
}
