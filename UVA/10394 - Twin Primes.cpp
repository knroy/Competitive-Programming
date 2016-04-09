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
bool status[20000000];
long int arr[100010];

void test()
{
    int i,j=1;
    for(i=3; i<=20000000; i++)
    {
        if(status[i]==0)
        {
            if(status[i+2]==0)
            {
                arr[j] = i;
                if(j>=100010)
                    break;
                j++;
            }
        }
    }
}

void siv()
{
    int i,j;
    int N=20000000;
    int sq=sqrt(N);
    for(i=4; i<=N; i+=2) status[i]=1;
    for(i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            for(j=i*i; j<=N; j+=i) status[j]=1;
        }
    }
    test();
}

int main()
{
    siv();
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("(%ld, %ld)\n",arr[n],arr[n]+2);
    }
    return 0;
}
