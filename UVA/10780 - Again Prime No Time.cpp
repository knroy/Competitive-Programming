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
#define sz 10005

using namespace std;

bool status[sz];
vector<int> primes;

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
    for(int i=1; i<sz; i++)
        if(status[i]==0)
            primes.push_back(i);
}

int divide(int N,int P)
{
    if(N==0)
        return 0;
    else
        return divide(N/P,P) + N/P;
}

int factorization(int m,int n)
{
    int mx = 100000;
    int sq = sqrt(m)+1;
    for(int i=0; primes[i]<sq; i++)
    {
        if(m%primes[i]==0)
        {
            int cnt = 0;
            while(m%primes[i]==0)
            {
                m /= primes[i];
                cnt++;
            }
            int x = divide(n,primes[i]);
            int s = int (x/cnt);
            mx = MIN(mx,s);
        }
    }
    if(m > 1)
    {
        int x = divide(n,m);
        mx = MIN(mx,x);
    }
    return mx;
}

int main()
{
    siv();
    int t,n,m,mx;
    cin >> t;
    for(int j=1; j<=t; j++)
    {
        cin >> m >> n;
        int pows = factorization(m,n);
        cout << "Case "<< j <<":"<<endl;
        if(pows==0)
        {
            cout << "Impossible to divide" << endl;
        }
        else
        {
            cout << pows << endl;
        }
    }
    return 0;
}
