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

int alpha[100];

void restore()
{
    for(int i=65; i<=90; i++)
    {
        alpha[i] = i;
    }
}

void changeChar(char ch1,char ch2)
{
    int i;
    for(i=65; i<91; i++)
    {
        if(alpha[i] == (int)ch2)
        {
            alpha[i] = (int) ch1;
        }
    }
}

int main()
{
    string str;
    int t,n;
    char p,q;
    scanf("%d",&t);
    while(t--)
    {
        cin >> str;
        restore();
        scanf("%d\n",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%c %c",&p,&q);
            getchar();
            changeChar(p,q);
        }

        int len=str.size();
        for(int i=0; i<len; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                printf("%c",alpha[str[i]]);
            }
            else
            {
                cout << str[i];
            }
        }
        printf("\n");
    }
    return 0;
}
