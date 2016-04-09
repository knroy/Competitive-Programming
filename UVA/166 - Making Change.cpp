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

int memorize[550];

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
    int a,b,c,d,e,f;
    string str;
    int coins[]= {5,10,20,50,100,200};
    int in[6];
    int coinNumbers = 6;
    while(scanf("%d %d %d %d %d %d",&in[0],&in[1],&in[2],&in[3],&in[4],&in[5]) && in[0]+in[1]+in[2]+in[3]+in[4]+in[5])
    {
        cin >> str;
        MEM(memorize,0);
        int x = generalize(str);
        memorize[0] = 1;
        for(int i=0;i<coinNumbers;i++)
        {
            for(int j=0;j<in[i];j++)
            {

            }
        }
    }
}
