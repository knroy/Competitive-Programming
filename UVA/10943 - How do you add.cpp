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
int arr[105][105];

void dp()
{
    int i,j;
    for(j=1; j<105; j++)
    {
        arr[1][j] = j;
    }
    for(i=1; i<105; i++)
    {
        arr[i][1] = 1;
    }
    for(i=2; i<105; i++)
    {
        for(j=2; j<105; j++)
        {
            arr[i][j] = (arr[i-1][j] + arr[i][j-1])%1000000;
        }
    }
}

int main()
{
    dp();
    int n,k;
    while(cin >> n >> k)
    {
        if(n==0 && k==0)
            break;
        cout << arr[n][k] << endl;
    }
    return 0;
}
