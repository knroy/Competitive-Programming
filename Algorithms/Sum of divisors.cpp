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
#define sz 10000

using namespace std;
long long unsigned dp[sz];

void sumOfDivisors()
{
    for(int i=1; i<sz; i++)
        for(int j=i; j<sz-i; j+=i)
            dp[j] += i;
}

int main()
{
    sumOfDivisors();
    long long n;
    while(cin >> n)
    {
        cout << "Sum of Divisors of " << n << " is: " << dp[n] << endl;
    }
    return 0;
}
