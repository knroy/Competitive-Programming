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

bool isIsomorphic(string str1,string str2)
{
    map<char,char> mp;
    if(str1.size()!=str2.size())
        return false;
    else
    {
        int i,ln=str1.size();
        for(i=0; i<ln; i++)
        {
            if(mp.find(str2[i])!=mp.end())
            {
                if(mp[str2[i]]!=str1[i])
                    return false;
            }
            else
                mp[str2[i]] = str1[i];
        }
        return true;
    }
}

int main()
{
    string str1,str2;
    cin >> str1 >> str2;
    cout << isIsomorphic(str1,str2) << endl;
    return 0;
}
