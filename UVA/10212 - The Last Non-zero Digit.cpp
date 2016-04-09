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
#define ll long long

using namespace std;

int lastNonZeroDigit(int n)
{
    if(n%10==0)
        while(n%10==0)
            n /= 10;
    return n%10;
}

int main()
{
    ll a,b;
    while(cin >> a >> b)
    {
        ll n = 1;
        for(ll i=a-b+1; i<=a; i++)
        {
            n = lastNonZeroDigit(n*i);
        }
        cout << n << endl;
    }
    return 0;
}
