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

int main()
{
    int n,i,j;
    char str[12];
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        gets(str);
        int len = strlen(str);
        sort(str,str+len);
        do
        {
            for(j=0; j<len; j++)
                printf("%c",str[j]);
            printf("\n");
        }
        while(next_permutation(str,str+len));
        printf("\n");
    }
    return 0;
}
