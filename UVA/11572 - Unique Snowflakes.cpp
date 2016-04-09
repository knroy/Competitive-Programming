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
vector <long long > v1,v2;
map <long long,long long> mp;

int main()
{
    int t;
    long long n,k,best,k_temp;
    scanf("%d",&t);
    while(t--)
    {
        best = 0;
        k_temp = 0;
        scanf("%lld",&n);
        while(n--)
        {
            scanf("%lld",&k);
            mp[k]++;
            if(mp[k]>best)
            {
                best = k;
            }
        }
        printf("%lld\n",)

    }
    return 0;
}
