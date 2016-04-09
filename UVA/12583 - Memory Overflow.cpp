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
#define Set(a, s) memset(a, s, sizeof (a))

using namespace std;

queue <int> Q;
set<char>st;

int main()
{
    int t,n,k,i,j,l,S=0,E=0,cnt=0,flag=0;
    char str[510];
    char memory[510];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %s",&n,&k,str);
        S=0,E=0,cnt=0,flag=0;
        if(k>=n)
        {
            for(j=0; j<n; j++)
                st.insert(str[j]);
            printf("Case %d: %d\n",i,n-st.size());
            st.clear();
        }
        else
        {
            memory[0]  = str[0];
            S = 0;
            E = 1;
            for(j=1; j<n; j++)
            {
                for(l=S; l<E; l++)
                {
                    if(str[j]==memory[l])
                    {
                        cnt++;
                        break;
                    }
                }
                memory[E] = str[j];
                E++;
                if(E-S>k)
                    S++;
            }
            printf("Case %d: %d\n",i,cnt);
        }
        memory[0]='\0';
    }
    return 0;
}
