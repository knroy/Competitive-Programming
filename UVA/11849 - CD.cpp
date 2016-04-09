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
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);

using namespace std;
map <long long,long long> data;

int main()
{
    long long ja,ji;
    while(scanf("%lld %lld",&ja,&ji)==2)
    {
        if(ja==0 && ji==0)
            break;
        long long temp,cnt=0;
        while(ja--)
        {
            scanf("%lld",&temp);
            data[temp] = 1;
        }
        while(ji--)
        {
            scanf("%lld",&temp);
            if(data.find(temp)!=data.end())
                cnt++;
        }
        printf("%lld\n",cnt);
        data.clear();
    }
    return 0;
}
