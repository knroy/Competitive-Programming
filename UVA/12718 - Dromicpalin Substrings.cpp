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

bool isPalindrome(char strns[])
{
    int len = strlen(strns);
    int mid = len/2;
    for(int i=0; i<mid; i++)
    {
        if(strns[i]!=strns[len-i-1])
            return false;
    }
    return true;
}

int main()
{
    long long cnt;
    string str,substri;
    char strn[1005];
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        cin >> str;
        cnt = 0;
        int len = str.length();
        for(j=0; j<len; j++)
        {
            for(k=1; k<=len-j; k++)
            {
                substri = str.substr(j,k);
                cout << substri;
                strcpy(strn,substri.c_str());
                if(isPalindrome(strn))
                {
                    cnt++;
                    cout << " Yes";
                }
                cout << endl;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
