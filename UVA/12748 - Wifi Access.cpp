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

struct wifi{

    int x,y,r;
    void access(int _x,int _y,int _r)
    {
        x = _x;
        y = _y;
        r = _r;
    }
}wifiaccess[510];

int main()
{
    int t,rx,ry,r,yx,yy;
    int n,y;
    int i,j,l,flag;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cout << "Case " << i << ":\n";
        cin >> n >> y;
        for(j=1;j<=n;j++)
        {
            cin >> rx >> ry >> r;
            wifiaccess[j].access(rx,ry,r);
        }
        for(j=1;j<=y;j++)
        {
            flag = 0;
            cin >> yx >> yy;
            for(l=1;l<=n;l++)
            {
                if(((yx-wifiaccess[l].x)*(yx-wifiaccess[l].x)+(yy-wifiaccess[l].y)*(yy-wifiaccess[l].y)) <= wifiaccess[l].r*wifiaccess[l].r)
                    {
                        cout << "Yes\n";
                        flag = 1;
                        break;
                    }
            }
            if(flag==0)
                cout << "No\n";
        }
    }
    return 0;
}
