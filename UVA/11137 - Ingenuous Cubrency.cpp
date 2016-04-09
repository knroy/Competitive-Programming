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

long long unsigned coinN[10005];
int coins[22];

int cube(int n)
{
    return n*n*n;
}

void initialize()
{
    MEM(coinN,0);
    coinN[0] = 1;
    for(int i=1; i<=21; i++)
    {
        coins[i] = cube(i);
    }
}

void cubrency()
{
    int i,j;
    for(i=1; i<=21; i++)
    {
        for(j=0; j<=10005; j++)
        {
            if(coinN[j]!=0)
            {
                if(j+coins[i]<10005)
                    coinN[j+coins[i]] = coinN[j] + coinN[j+coins[i]];
            }
        }
    }
}

int main()
{
    int n;
    initialize();
    cubrency();
    while(cin >> n)
    {
        cout << coinN[n] << endl;
    }
    return 0;
}
