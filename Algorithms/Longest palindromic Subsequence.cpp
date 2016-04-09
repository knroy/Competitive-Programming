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

class myString
{
public:
    static string rev(string str)
    {
        int ln = str.size();
        for(int i=0; i<ln/2; i++)
        {
            char tmp = str[i];
            str[i] = str[ln-i-1];
            str[ln-i-1] = tmp;
        }
        return str;
    }
};

int LCS(string a,string b)
{
    int c[100][100];
    MEM(c,0);
    int lena = a.size();
    int lenb = b.size();
    int i,j;
    for(i=1; i<=lena; i++)
    {
        for(j=1; j<=lenb; j++)
        {
            if(a[i-1]==b[j-1])
                c[i][j] = c[i-1][j-1]+1;
            else
                c[i][j] = MAX(c[i][j-1],c[i-1][j]);
        }
    }
    return c[lena][lenb];
}

int LPS(string str)
{
    int len = str.size();
    int i,j,k;
    int dp[100][100];

    for(i=0;i<len;i++)
        dp[i][i] = 1;

    for(k=2;k<=len;k++)
    {
        for(i=0;i<len-k+1;i++)
        {
            j = i+k-1;
            if(str[i] == str[j] && k==2)
                dp[i][j] = 2;
            else if(str[i] == str[j])
                dp[i][j] = dp[i+1][j-1]+2;
            else
                dp[i][j] = MAX(dp[i][j-1],dp[i+1][j]);
        }
    }
    return dp[0][len-1];
}

int main()
{
    // This method is working with LCS(string a, revese(string a))
    myString s;
    string ss;
    cin >> ss;
    int n = LCS(ss,s.rev(ss));
    cout << "Using LCS(s,rev(s)): " << n << endl;
    cout << "Using LPS: " << LPS(ss) << endl;
}
