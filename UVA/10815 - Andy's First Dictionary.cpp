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

using namespace std;
set <string> s;

int main()
{
    freopen("In572.txt", "r", stdin);
    string mystring;
    char ch;
    char par[210];
    int l=0;
    while(scanf("%c",&ch)==1)
    {
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch=='-')
        {
            if(ch!='-')
            {
                par[l]= tolower(ch);
                l++;
            }
        }
        else
        {
            par[l]='\0';
            if(par[0]!='\0')
            {
                mystring = par;
                s.insert(mystring);
            }
            l = 0;
        }
    }
    set <string> :: iterator it;
    for(it = s.begin(); it!=s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}
