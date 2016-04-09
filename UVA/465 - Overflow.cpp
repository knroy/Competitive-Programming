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
    long long unsigned a,b,result;
    long long unsigned MAX_NUM = 2147483647;
    char x;
    while(scanf("%llu %c %llu",&a,&x,&b)==3)
    {
        result = MAX_NUM * MAX_NUM;
        printf("%llu %c %llu\n",a,x,b);
        cout << result << endl;
        if(x=='+')
        {
            if(b>MAX_NUM-a)
            {

            }
        }
    }
    return 0;
}
