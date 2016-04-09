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

using namespace std;

int isPrime(int n)
{
    if(n==2 || n==3)
        return 1;
    if(n%2==0 || n%3==0)
        return 0;
    int j=1,k=5;
    for(; k*k<=n; j++,k=6*j-1)
    {
        if(n%k==0)return 0;
        if(n%(k+2)==0)return 0;
    }
    return 1;
}

int main()
{
    long n,p1,p2;
    while(scanf("%ld",&n)==1)
    {
        long mid = n/2;
        p1 = 2;
        while(p1<=mid)
        {
            if(isPrime(p1))
            {
                p2 = n - p1;
                if(isPrime(p2))
                    break;
                else
                {
                    p1++;
                }
            }
            else
                p1++;
        }
        if((p1+p2)==n && abs(p1-p2)>0)
            printf("%ld is the sum of %ld and %ld.\n",n,p1,p2);
        else
            printf("%ld is not the sum of two primes!\n",n);
        p2 = 0;
    }
    return 0;
}
