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

using namespace std;

int main()
{
    int t,n;
    int x[105],tmp;
    long long res;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> n;
        for(int j=0; j<n; j++)
            cin >> x[j];
        sort(x,x+n);
        res = 1;
        for(int j=0; j<n; j++)
        {
            tmp = x[j] - j;
            if(tmp<0)
                tmp = 0;
            if(res >=1)
            {
                res = (res * tmp)% 1000000007;
            }
        }
        cout << "Case " << i << ": " << res << endl;
    }
    return 0;
}
