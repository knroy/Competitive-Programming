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

int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,eight1=0,eight2=0;
void init()
{
    zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,eight1=0,eight2=0;
}

int strMod(string str)
{
    int ln = str.size();
    for(int i=0;i<ln;i++)
    {
        zero = (zero*10 + str[i]-'0')%2;
        one = (one*10 + str[i]-'0')%5;
        two = (two*10 + str[i]-'0')%7;
        three = (three*10 + str[i]-'0')%11;
        four = (four*10 + str[i]-'0')%15;
        five = (five*10 + str[i]-'0')%20;
        six = (six*10 + str[i]-'0')%28;
        seven = (seven*10 + str[i]-'0')%36;

        eight = (zero*10 + str[i]-'0')%4;
        zero = (zero*10 + str[i]-'0')%100;
        zero = (zero*10 + str[i]-'0')%400;

    }
}

int main()
{

}
