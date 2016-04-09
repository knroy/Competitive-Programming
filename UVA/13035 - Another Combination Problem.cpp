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
#define pb(x) push_back(x)
#define MEM(a,b) memset((a),(b),sizeof(a))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);
#define sz 1000000000
#define INF (1<<28)
#define i64 long long unsigned
#define ll long long
#define li long int

using namespace std;

int main()
{
    i64 n,res,n1,n2;
    i64 mod = 1000000007;
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> n;
        n1 = n+1;
        n2 = n+2;
        if(n%3==0)
            n /= 3;
        else if(n1%3==0)
            n1 /= 3;
        else if(n2%3==0)
            n2 /= 3;
        res = (((n*n1)%mod)*n2)%mod;
        cout << "Case " << i << ": " << res << endl;
    }
    return 0;
}
