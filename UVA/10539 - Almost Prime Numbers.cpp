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
#define sz 1000005
#define mx 1000000000004

using namespace std;

bool status[sz];
vector <long long>  primes;

void siv()
{
    int i,j;
    int N=1000005;
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

void gen()
{
    siv();
    int i;
    int cnt = 0;
    primes.push_back(-1);
    for(i=2; i<sz; i++)
    {
        if(status[i]==0)
        {
            long long x = (long long) i*i;
            while(x<=mx)
            {
                primes.push_back(x);
                x *= i;
            }
        }
    }
    sort(primes.begin(),primes.end());
}

long long binarySearch(long long N)
{
    long long beg = 1,mid,ends = primes.size();
    while(beg<=ends)
    {
        mid = (beg+ends)/2;
        if(primes[mid]==N)
            return mid;
        else if(primes[mid]>N)
            ends = mid - 1;
        else
            beg = mid + 1;
    }
    return (beg+ends)/2;
}

int main()
{
    gen();
    int n;
    long long lb,ub,i,j;
    cin >> n;
    while(n--)
    {
        cin >> lb >> ub;
        i = binarySearch(lb-1);
        j = binarySearch(ub);
        cout << j - i << endl;
    }
    return 0;
}
