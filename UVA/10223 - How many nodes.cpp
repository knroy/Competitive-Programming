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
#define sz 22

using namespace std;

map<long long unsigned,int> mp;

long long unsigned cat[sz];

void cata()
{
    int i;
    cat[0] = 1;
    cat[1] = 1;
    for(i=2; i<sz; i++)
    {
        cat[i] = cat[i-1]*(4*i-6)/i;
        mp[cat[i]] = i-1;
    }
}

int main()
{
    cata();
    long long unsigned n;
    while(scanf("%llu",&n)==1)
    {
        if(mp.find(n)!=mp.end())
            cout << mp[n] << endl;
    }
    return 0;
}
