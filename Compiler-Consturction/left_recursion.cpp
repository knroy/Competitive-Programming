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
#define pb(x) push_back(x)
#define MEM(a,b) memset((a),(b),sizeof(a))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);
#define sz 1000000000
#define INF (1<<28)
#define i64 long long unsigned
#define ll long long
#define li long int

using namespace std;

struct points
{
    string origin;
    string orSbstrLeft;
    string orSbstrRight;
};

int orPos(string str,int n)
{
    for(int i=0; i<n; i++)
        if(str[i]=='|')
            return i;
}
points left_rec(string str,int n)
{
    points data;
    int pos = orPos(str,n);
    string sbstr = str.substr(pos+1,n-pos);
    string orSbstr = str.substr(3,pos-3);
    string origin = str.substr(0,1);
    data.origin = origin;
    data.orSbstrLeft = orSbstr;
    data.orSbstrRight = sbstr;
    return data;
}

int main()
{
    string str;
    while(cin >> str)
    {
        int len = str.length();
        if(str[0] == str[2])
        {
            points data = left_rec(str,len);
            cout << data.origin << "-" << data.orSbstrRight << data.origin << "'" << endl;
            cout << data.origin << "'- " << data.orSbstrLeft << data.origin << "'|" << (char)(128) << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
    return 0;
}
