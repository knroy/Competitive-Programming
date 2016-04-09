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
#define In freopen("In572.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);

using namespace std;
map <string, long int> points;

int main()
{
    string mystring;
    int t,n;
    long int point;
    char par[20],ch;
    scanf("%d %d",&t,&n);
    getchar();
    while(t--)
    {
        cin >> mystring >> point;
        points[mystring] = point;
    }
    while(n--)
    {
        long int sum = 0;
        int l = 0;
        while(scanf("%c",&ch)==1)
        {
            if(ch=='.')
                break;
            else if(ch==' ' || ch=='\n')
            {
                par[l]='\0';
                mystring = par;
                l = 0;
                if(points.find(mystring)== points.end())
                {
                    sum += 0;
                }
                else
                    sum += points[mystring];
            }
            else
            {
                par[l] = ch;
                l++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
