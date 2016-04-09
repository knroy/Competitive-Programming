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

vector<int>G;
vector<string>G1;

void grade(int strt,int h,int result)
{
    int a,b,c;
    if(strt > h)
    {
        G.push_back(result);
        return;
    }
    else if(strt==1)
    {
        a = result + 1;
        b = result + 1;
        c = result + 1;
    }
    else
    {
        a = result + strt;
        b = result - strt;
        c = result*10;
    }
    grade(strt+1,h,a);
    grade(strt+1,h,b);
    grade(strt+1,h,c);
}

void gradeString(int strt,int h,string result)
{
    string a="";
    string b="";
    string c="";
    if(strt > h)
    {
        G1.push_back(result);
        return;
    }
    else if(strt == 1)
    {
        a = "1";
        b = "1";
        c = "1";
    }
    else
    {
        char ch = (char)(strt + 48);
        a = result + "+" + ch;
        b = result + "-" + ch;
        c = result + ch;
    }
    gradeString(strt+1,h,a);
    gradeString(strt+1,h,b);
    gradeString(strt+1,h,c);
    strt += 1;
    cout << strt << " -- > :p" << endl;
}

int main()
{
    int n;
    scanf("%d",&n);
    gradeString(1,n,"");
    for(int i=0; i<G1.size(); i++)
    {
        cout << G1[i] << "\n";
    }
}
