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
#define sz 35000

using namespace std;

bool status[sz+5];

vector <long long> primes;
void siv()
{
    int i,j;
    int N = 35000;
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
    for(long long i=2; i<sz; i++)
        if(status[i]==0)
            primes.push_back(i);
}

int numberOfDivisors(long long N)
{
    int cnt,i,val,sum;
    val=sqrt(N)+1;
    sum=1;
    for(i=0; primes[i]<val; i++)
    {
        if(N%primes[i]==0)
        {
            cnt=0;
            while(N%primes[i]==0)
            {
                N/=primes[i];
                cnt++;
            }
            sum*=(cnt+1);
        }
    }
    if(N>1)
        sum=sum*2;
    return sum;
}

int main()
{
    siv();
    long long u,v,i;
    int n;
    cin >> n;
    while(n--)
    {
        cin >> u >> v;
        int mx = -1;
        int x;
        long long index;
        for(i=u; i<=v; i++)
        {
            x = numberOfDivisors(i);
            if(x > mx)
            {
                mx = x;
                index = i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %d divisors.\n",u,v,index,mx);
    }
    return 0;
}

