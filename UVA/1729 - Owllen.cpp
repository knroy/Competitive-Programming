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
#include <string>
#include <cctype>
#define MEM(a,b) memset((a),(b),sizeof(a))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);

using namespace std;

int main()
{
    string str;
    int n,ln,res,mln;
    map<char,int> mp;
    map<char,int> :: iterator it;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> str;
        ln = str.length();
        for(int j=0; j<ln; j++)
        {
            if(mp.find((char)str[j])!=mp.end())
                mp[str[j]]++;
            else{
                mp[str[j]] = 1;
            }
        }
        mln = mp.size();
        res = 100000;
        if(mln < 26){
            cout << "Case " << i << ": 0" << endl;
        }else{
            for(it=mp.begin();it!=mp.end();it++){
                if(mp[it->first] < res){
                    res = (int) mp[it->first];
                }
            }
            cout << "Case " << i << ": " << res << endl;
            mp.clear();
        }
    }
    return 0;
}
