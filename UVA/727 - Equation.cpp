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

vector <char> Q,P;
stack <char> s;

int hashigherprec(char a,char b)
{
    char w = '+', x = '-', y = '*',z = '/';
    if((a == w || a == x) && (b == w || b == x))
        return 1;
    else if((a == '*' || a == '/') && (b == w || b == x || b == y || b == z))
        return 1;
    return 0;
}

void infTopost()
{
    int i;
    for(i=0; i<Q.size(); i++)
    {
        if(Q[i]>='0' && Q[i]<='9')
            P.push_back(Q[i]);
        else if(Q[i]=='(' || Q[i]==')')
        {
            if(Q[i]=='(')
                s.push(Q[i]);
            else
            {
                while(s.top()!='(')
                {
                    P.push_back(s.top());
                    s.pop();
                }
                s.pop();
            }
        }
        else
        {
            while(!s.empty() && hashigherprec(s.top(),Q[i]))
            {
                P.push_back(s.top());
                s.pop();
            }
            s.push(Q[i]);
        }
    }
    while(!s.empty())
    {
        P.push_back(s.top());
        s.pop();
    }
}

int main()
{
    int n,i,j;
    char ch,str[2];
    scanf("%d",&n);
    getchar();
    getchar();
    for(i=0; i<n; i++)
    {
        if(i>0)
            printf("\n");
        while(gets(str) && strlen(str)!=0)
        {
            Q.push_back(str[0]);
        }
        infTopost();
        for(j=0; j<P.size(); j++)
            printf("%c",P[j]);
        printf("\n");
        P.clear();
        Q.clear();
    }
    return 0;
}
