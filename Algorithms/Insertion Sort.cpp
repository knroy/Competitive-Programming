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
///************ Habijabi ends here**********************///

using namespace std;

int main()
{
    int n,i,j,A[100];
    cin >> n;
    for(i=1; i<=n; i++)
    {
        cin >> A[i];
    }

    for(i=1; i<=n; i++)
    {
        int x = A[i];
        j = i;
        while(j>1 && A[j-1]>x)
        {
            A[j] = A[j-1];
            j--;
        }
        A[j] = x;
    }

    for(i=1; i<=n; i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}

