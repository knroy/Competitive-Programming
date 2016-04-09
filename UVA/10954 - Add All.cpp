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
    int x,i;
    long int m,cost;
    int a,b;
    priority_queue< int, vector<int>, greater<int> > n;
    while(scanf("%d",&x) && x)
    {
        cost = 0;
        for(i=0; i<x; i++)
        {
            scanf("%d",&m);
            n.push(m);
        }
        while(n.size()!=1)
        {
            a = n.top();
            n.pop();
            b = n.top();
            n.pop();
            cost += a+b;
            n.push(a+b);
        }
        printf("%ld\n",cost);
        n.pop();
    }
    return 0;
}
