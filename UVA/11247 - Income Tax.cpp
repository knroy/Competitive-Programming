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
    In
    long long m,x,tmp,chk;
    while(scanf("%lld %lld",&m,&x) && m+x)
    {
        if(m == 0 && x == 0)
            break;
        chk = 100 - x;
        if(chk==0)
        {
            cout << "Not found" << endl;
        }
        else
        {
            tmp = ((m-1)*100)/(100-x);
            if(tmp <= m-1)
                cout << "Not found" << endl;
            else
                cout << tmp << endl;
        }

    }
    return 0;
}
