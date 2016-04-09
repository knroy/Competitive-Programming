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
#include <cstdlib>
#define MEM(a,b) memset((a),(b),sizeof(a))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);
#define sz 30010

using namespace std;

long long unsigned memorize[30010];

void init()
{
    int coins[]= {5,10,20,50,100,200,500,1000,2000,5000,10000};
    int coinNumbers = 11;
    MEM(memorize,0);
    memorize[0] = 1;
    for(int i=0; i<coinNumbers; i++)
    {
        for(int j=0; j<sz; j++)
        {
            if(memorize[j]!=0)
            {
                if(j+coins[i]<sz)
                {
                    memorize[j+coins[i]] = memorize[j+coins[i]] + memorize[j];
                }
            }
        }
    }
}

int generalize(string str)
{
    int ln = str.size();
    int sum = 0;
    int x = 0;
    int ind;
    bool isSmall = false;
    int total = 0;
    for(int i=0;i<ln;i++){
        if(str[i]=='.'){
            ind = i;
            break;
        }
        sum = (sum*10) + (str[i]-48);
    }
    for(int i=ind+1;i<ln;i++)
    {
        total = (total*10) + (str[i]-48);
    }
    return sum*100+total;
}

int main()
{
    string str;
    double n;
    init();
    while(cin >> str)
    {
        if(str=="0.00")
            break;
        sscanf(str.c_str(),"%lf",&n);
        int x = generalize(str);
        printf("%6.2lf%17llu\n",n,memorize[x]);
    }
}
