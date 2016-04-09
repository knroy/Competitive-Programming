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

map <string,int> mp;

int main()
{
    string s,subs,subsr;
    int n,i,temp;
    while(cin >> n >> s)
    {
        int len = strlen(s.c_str());
        for(i=0; i<len-n; i++)
        {
            subs = s.substr(i,n);
            mp[subs]++;
        }
        map <string,int> :: iterator it;
        int m = 0;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            temp = it->second;
            if(temp > m)
            {
                m = temp;
                subsr = it->first;
            }
        }
        cout << subsr << endl;
        mp.clear();
    }
    return 0;
}
