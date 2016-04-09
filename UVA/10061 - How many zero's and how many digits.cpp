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
#define sz 1050
#define ll long long

using namespace std;

bool status[sz];
vector<int> primes;
vector<double> logs;

void siv()
{
    int i,j;
    int N=(int) sz;
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
    for(int i=1; i<sz; i++)
        if(status[i]==0)
            primes.push_back(i);
}

long long divide(long long N,long long P)
{
    if(N==0)
        return 0;
    else
        return divide(N/P,P) + N/P;
}

ll factorization(ll m,ll n)
{
    ll mx = 1000000000;
    ll sq = sqrt(m)+1;
    for(ll i=0; primes[i]<sq; i++)
    {
        if(m%(ll)primes[i]==0)
        {
            ll cnt = 0;
            while(m%(ll)primes[i]==0)
            {
                m /= primes[i];
                cnt++;
            }
            ll x = divide(n,primes[i]);
            ll s = (ll)(x/cnt);
            mx = MIN(mx,s);
        }
    }
    if(m > 1)
    {
        ll x = divide(n,m);
        mx = MIN(mx,x);
    }
    return mx;
}

void logarithm()
{
    logs.push_back(0);
    for(ll i=1; i<1048580; i++)
    {
        logs.push_back(log(i));
        logs[i] += logs[i-1];
    }
    return;
}

int main()
{
    siv();
    logarithm();
    long long n,b;
    while(cin >> n >> b)
    {
        double ans = logs[n];
        ans /= log(b);
        ans += 1.0;
        ll x = floor(ans);
        cout << factorization(b,n) << " " << x << endl;
    }
    return 0;
}


