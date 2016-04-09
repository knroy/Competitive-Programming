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

bool check(string str,string ss)
{
    int cnt = 0;
    int ln = str.length();
    for(int i=0;i<ln;i++)
    {
        if(str[i]!=ss[i])
            cnt++;
    }
    if(cnt > 1)
        return 0;
    return 1;
}

int main()
{
    string str[1005],rem;
    int t,n;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> n;
        for(int j=0;j<n;j++)
            cin >> str[j];
        cin >> rem;
        cout << "Case " << i << ":" << endl;
        for(int j=0;j<n;j++)
        {
            if(check(str[j],rem)){
                cout << str[j] << endl;
            }
        }
    }
    return 0;
}
