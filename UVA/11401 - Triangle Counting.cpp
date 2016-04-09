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

using namespace std;

i64 C(long long n)
{
    double res = 1;
    int k = 3;
    for (int i=1; i<=k; ++i)
    {
        res = res * (n-k+i) / i;
    }
    return (i64) (res + 0.01);
}


int main()
{
    long long n;
    while(cin >> n)
    {
        i64 x = C(n);
        cout << x/3 << endl;
    }
}
