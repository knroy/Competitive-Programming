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
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);

using namespace std;
map <char, int> data;
vector <char > v;
set <char > s;

int main()
{
    int n,i,j,len;
    char str[10000],flag;
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        gets(str);
        len = strlen(str);
        v.push_back(str[0]);
        for(j=1; j<len; j++)
        {
            data[flag]++;
            flag = v[v.size()-1];
            if(flag!=str[j])
                v.push_back(str[j]);
            else
                v.pop_back();
            s.insert(str[j]);
        }
        set <char > :: iterator it;
        cout << "Case " << i << endl;
        for(it=s.begin(); it!=s.end(); it++)
        {
            cout << *it << " = " << data[*it] << endl;
        }
        s.clear();
        v.clear();
        data.clear();
        flag='\0';
    }
    return 0;
}
