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
set <string > s;
vector <char> vs;

int main()
{
    string v;
    char ch,str[510];
    while(scanf("%c",&ch)==1)
    {
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch=='-')
        {
            vs.push_back(ch);
        }
        else
        {
            if(ch=='\n' || ch=='\0')
            {
                if(vs[vs.size()-1]=='-')
                    vs.pop_back();
                else
                {
                    if(vs.size()!=0)
                    {
                        for(int i = 0; i<vs.size(); i++)
                            str[i] = tolower(vs[i]);
                        str[vs.size()]='\0';
                        v = str;
                        s.insert(v);
                    }
                    vs.clear();
                    v.clear();
                    str[0]='\0';
                }
            }
            else
            {
                if(vs.size()!=0)
                {
                    for(int i = 0; i<vs.size(); i++)
                        str[i] = tolower(vs[i]);
                    str[vs.size()]='\0';
                    v = str;
                    s.insert(v);
                }
                vs.clear();
                v.clear();
                str[0]='\0';
            }
        }
    }
    set <string > :: iterator it;
    for(it=s.begin(); it!=s.end(); it++)
        cout << *it << endl;
    return 0;
}
