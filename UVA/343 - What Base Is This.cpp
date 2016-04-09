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
#define i64 long long unsigned
#define ll long long
#define li long int

using namespace std;

i64 power(int n,int p)
{
    i64 total = 1;
    for(int i=1; i<=p; i++)
    {
        total *= n;
    }
    return total;
}

i64 convert(string str,int base)
{
    i64 inBase=0;
    int ln = str.length(),tmp;
    for(int i=0; i<ln; i++)
    {
        if(str[i]>='A' && str[i]<='z')
            tmp = str[i] - 55;
        else
            tmp = str[i] - '0';
        inBase += tmp * power(base,ln-i-1);
    }
    return inBase;
}

string deConvert(i64 inBase,int base)
{
    string str = "";
    char ch;
    int n;
    if(inBase == 0)
        str = "0";
    while(inBase)
    {
        n = inBase%base;
        if(n<10)
            ch = n + '0';
        else
            ch = (char)(n + 55);
        str = ch + str;
        inBase /= base;
    }
    return str;
}

int main()
{
    string str1,str2;
    i64 inBase,inBase2;
    string str,str3;
    int x,y,flag;
    while(cin >> str1 >> str2)
    {
        flag = 0;
        for(int i=2; i<=36; i++)
        {
            inBase = convert(str1,i);
            str = deConvert(inBase,i);
            if(str1.compare(str)==0)
            {
                x = i;
                for(int j=2; j<=36; j++)
                {
                    inBase2 = convert(str2,j);
                    str3 = deConvert(inBase2,j);
                    if(str3.compare(str2)==0 && inBase2 == inBase)
                    {
                        y = j;
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 1)
                break;
        }
        if(flag==0)
            cout << str1 <<" is not equal to " << str2 << " in any base 2..36" << endl;
        else
            cout << str1 << " (base " << x << ") = " << str2 << " (base " << y << ")" << endl;
    }
    return 0;
}
