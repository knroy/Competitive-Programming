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
long long int result;

int power(int a,int b)
{
    int ress=1,i=1;
    while(i<=b)
    {
        ress *= a;
        i++;
    }
    return ress;
}

void bintodeci(string str)
{
    int len = str.size();
    for(int i=len-1; i>=0; i--)
    {
        result += (str[i]-'0')* power(2,(len-1-i));
    }
}

int main()
{
    char ch,ic;
    string res;
    while(cin >> ch)
    {
        if(ch=='~')
            break;
        int cnt = 1;
        char flag = '2';
        res = "";
        while(scanf("%c",&ic)==1)
        {
            if(ic==' ' || ic=='\n' || ic=='\0' || ic=='#')
            {
                if(cnt == 1)
                    flag = '1';
                else if(cnt == 2)
                    flag = '0';
                else if(cnt > 2 && flag!='2')
                {
                    int ln = cnt - 2;
                    for(int i=1; i<=ln; i++)
                    {
                        res += flag;
                    }
                }
                cnt = 0;
                if(ic=='#')
                    break;
            }
            else
                cnt++;
        }
        bintodeci(res);
        cout << result << endl;
        result = 0;
    }
    return 0;
}
