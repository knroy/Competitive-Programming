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
map <string,int>mp;
string mon[]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November","December"};
int days[]= {31,28,31,30,31,30,31,31,30,31,30,31};

void monday()
{
    for(i=0; i<12; i++)
        mp[mon[i]]=days[i];
}

int main()
{
    monday();
    char ch;
    int d1,d2,n,i;
    long long int y1,y2;
    string s1,s2;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        cin >> s1 >> d1 >> ch >> y1;
        cin >> s2 >> d2 >> ch >> y2;
    }

}
