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
#define In freopen("In572.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);

using namespace std;

vector <char> str[150];

int main()
{
    In
    char ch;
    int i=0,j,k,mex=0;
    string chh;
    while(scanf("%c",&ch)==1)
    {
        if(ch!='\n' && ch!='\0')
            str[i].push_back(ch);
        else
        {
            if(str[i].size()>mex)
                mex = str[i].size();
            i++;
        }
    }
    for(j=0; j<mex; j++)
    {
        for(k=i-1; k>=0; k--)
        {
            if(j>=str[k].size())
                printf(" ");
            else
                cout << str[k][j];
        }
        printf("\n");
    }
    return 0;
}
