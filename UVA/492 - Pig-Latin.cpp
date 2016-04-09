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

bool isVowel(char ch)
{
    if(ch=='a' || ch == 'A' || ch == 'e' || ch=='E' || ch == 'i' || ch == 'I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
        return true;
    return false;
}

bool isAplha(char ch)
{
    if((ch>='a' && ch <='z') || (ch>='A' && ch <='Z'))
        return true;
    return false;
}

string checkAndReturn(string str)
{
    string st="";
    int ln = str.size();
    if(ln==0)
    {
        return st;
    }
    if(isVowel(str[0]))
    {
        str += "ay";
        return str;
    }
    else
    {
        st = str.substr(1,ln-1);
        st = st + str[0] + "ay";
        return st;
    }
}



int main()
{
    char ch;
    string tmp="";
    string finalString;
    while(scanf("%c",&ch)==1)
    {
        if(!isAplha(ch))
        {
            if(tmp.size()==0)
            {
                printf("%c",ch);
            }
            else{
                finalString = checkAndReturn(tmp);
                cout << finalString;
                printf("%c",ch);
                tmp = "";
            }
        }else{
            tmp += ch;
        }
    }
    return 0;
}
