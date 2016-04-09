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
#define sqaure(x) ((x)*(x))
#define EPS 1e-7

using namespace std;

int p,q,r,s,t,u;

float f(float x)
{
    float fx = p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * sqaure(x) + u;
    return fx;
}

int main()
{
    float a,b,x,fx1,fx2,fx;
    int flag;
    while(cin >> p >> q >> r >> s >> t >> u)
    {
        a = 0.0,b=1.0;
        fx1 = f(a);
        fx2 = f(b);
        if((fx1>0 && fx2>0) || (fx1<0 && fx2<0))
            cout << "No solution" << endl;
        else if(fx1==0)
            cout << "0.0000" << endl;
        else if(fx2==0)
            cout << "1.0000" << endl;
        else
        {
            flag = 1;
            while(flag)
            {
                x = (a+b)/2;
                fx = f(x);
                if(fx<0)
                    b = x;
                else
                    a = x;
                if(fabs(a-b)<=EPS)
                    flag = 0;
            }
            printf("%.4f\n",x);
        }
    }
    return 0;
}
