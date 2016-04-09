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

string negatenary(long long int value)
{
    string result;
    while (value != 0)
    {
        long long int remainder = value % (-2);
        value = value / (-2);

        if (remainder < 0)
        {
            remainder += 2;
            value += 1;
        }
        char ch = remainder + '0';
        result = ch + result;
    }
    return result;
}

int main()
{
    //http://en.wikipedia.org/wiki/Negative_base
    long long int n,v,i;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        string x="0";
        cin >> v;
        if(v!=0)
            x = negatenary(v);
        printf("Case #%lld: %s\n",i,x.c_str());
    }
    return 0;
}
