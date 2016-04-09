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
#define i64 long long

using namespace std;

bool status[100006];

void siv()
{
    int i,j;
    int N=100005;
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
    string str;
    while(cin >> str)
    {
        int mx = -1000;
        string maxsbstr;
        if(str.compare("0")==0)
            break;
        int len = str.length();
        for(int i=0; i<len; i++)
        {
            for(int j=1; j<len-i+1; j++)
            {
                string sbstr = str.substr(i,j);
                int ln = sbstr.length();
                if(ln<=6)
                {
                    int num = 0;
                    for(int i=0; i<ln; i++)
                        num = num * 10 + sbstr[i] - 48;
                    if(num <= 100005)
                    {
                        if(status[num]==0)
                        {
                            if(num > mx)
                                mx = num;
                        }
                    }
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
}
