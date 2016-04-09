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
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);

using namespace std;

int main()
{
    double x,y,r,temp;
    int t,i;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> r;
        temp = sqrt(x*x+y*y);
        double big = r + temp;
        double small = r - temp;
        printf("%.2lf %.2lf\n",small,big);
    }
    return 0;
}
