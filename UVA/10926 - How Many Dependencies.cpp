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

const int inf = 2000000000;

int n;
int Sequence[105];
int L[105];
int I[105];


int LisNlogK()
{
    int i;
    int LisLength = 0;

    I[0] = -inf;
    for( i = 1; i <= n; i++ )
        I[i] = inf;

    for( i = 0; i < n; i++ )
    {
        int low, high, mid;
        low = 0;
        high = LisLength;

        while( low <= high )
        {
            mid = ( low + high ) / 2;
            if( I[mid] < Sequence[i] )
                low = mid + 1;
            else
                high = mid - 1;
        }

        I[low] = Sequence[i];
        if( LisLength < low )
            LisLength = low;
    }
    return LisLength;
}

int main()
{
    In
    int t,mx;
    while(scanf("%d",&t)==1 && t)
    {
        mx = -100000;
        int index;
        for(int j=1; j<=t; j++)
        {
            cin >> n;
            if(n!=0)
            {
                for(int i=0; i<n; i++)
                    cin >> Sequence[i];
                int tmp = LisNlogK();
                if(tmp > mx)
                {
                    mx = tmp;
                    index = j;
                }
            }
        }
        cout << index << endl;
    }
    return 0;
}
