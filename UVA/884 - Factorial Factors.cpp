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
#define sz 1000001

using namespace std;

bool status[sz];
int Factors[sz];

void siv()
{
    int i,j;
    int N=(int)sz;
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

int factors(int N)
{
    if(N == 1) return 0;
    if(status[N]==0) return Factors[N] = 1;
    if(Factors[N]!=-1) return Factors[N];
    int sq=sqrt(N);
    if(sq*sq == N) return Factors[N] = 2*factors(sq);
    else
    {
        int l = sqrt(N);
        int r = N/l;
        while((l*r)!=N)
        {
            l--;
            r = N/l;
        }
        return Factors[N] = factors(l) + factors(r);
    }
}

void gen()
{
    siv();
    MEM(Factors,-1);
    for(int i=2; i<sz; i++)
        int x = factors(i);
    Factors[1] = 0;
    for(int i=2; i<sz; i++)
        Factors[i] += Factors[i-1];
}

int main()
{
    gen();
    int n;
    while(cin >> n)
    {
        cout << Factors[n] << endl;
    }
    return 0;
}
