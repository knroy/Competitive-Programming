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
bool status[2010];
vector <char> v;
map <char,int> mp;

void siv()
{
    int i,j;
    int N=2010;
    int sq=sqrt(N);
    for(i=4; i<=N; i+=2) status[i]=1;
    for(i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            for(j=i*i; j<=N; j+=i) status[j]=1;
        }
    }
    status[1]=1;
}

int main()
{
    siv();
    int n,i,j;
    char str[2010];
    scanf("%d",&n);
    getchar();
    for(i=1; i<=n; i++)
    {
        gets(str);
        int len = strlen(str);
        for(j=0; j<len; j++)
        {
            if(str[j]>='0' && str[j]<='9' || str[j]>='A' && str[j]<='Z' || str[j]>='a' && str[j]<='z')
                mp[str[j]]++;
        }
        map <char,int> :: iterator it;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(status[it->second]==0)
                v.push_back(it->first);
        }
        printf("Case %d: ",i);
        if(v.size()>0)
        {
            for(j=0; j<v.size(); j++)
                printf("%c",v[j]);
        }
        else
            printf("empty");
        printf("\n");
        v.clear();
        mp.clear();
    }
    return 0;
}
