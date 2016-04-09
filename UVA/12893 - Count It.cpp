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

i64 recur(i64 n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return recur(n/2)+(n%2);
}

int main()
{
    i64 n;
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        cout << recur(n) << endl;
    }
    return 0;
}
