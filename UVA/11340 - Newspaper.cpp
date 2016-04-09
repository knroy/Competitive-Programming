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
map <char,double> mp1,mp2;

int main()
{
    int n,m,q,i,j,temp;
    double sum,p;
    char ch;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&m);
        getchar();
        for(j=0; j<m; j++)
        {
            scanf("%c %lf",&ch,&p);
            getchar();
            mp1[ch] = p;
        }
        scanf("%d",&q);
        getchar();
        for(j=0; j<q; )
        {
            while(1)
            {
                scanf("%c",&ch);
                if(ch=='\n' || ch=='\0')
                {
                    j++;
                    break;
                }
                mp2[ch]++;
            }
        }
        sum = 0;
        map <char,double> :: iterator it;
        for(it=mp1.begin(); it!=mp1.end(); it++)
        {
            char x = it->first;
            if(mp2.find(x) != mp2.end())
                sum += mp2[x]*mp1[x];
        }
        printf("%.2lf$\n",sum/100);
        mp1.clear();
        mp2.clear();
    }
    return 0;
}
