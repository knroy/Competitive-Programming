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

int isPalindrome(string sbstr)
{
    int ln = sbstr.size();
    for(int i=0; i<(ln+1)/2; i++)
    {
        if(sbstr[i]!=sbstr[ln-i-1])
            return 0;
    }
    return 1;
}

int main()
{
    string str;
    while(cin >> str)
    {
        set<string> st;
        int n = str.size();

        for(int i=0; i<n; i++)
        {
            string tmp = "";
            tmp += str[i];
            st.insert(tmp);
        }
        int total = 0;
        for(int i=2; i<=n; i++)
        {
            for(int j=0; j<n-i+1; j++)
            {
                string sbst = str.substr(j,i);
                st.insert(sbst);
            }
        }
        set<string>:: iterator it;
        for(it=st.begin(); it!=st.end(); it++)
        {
            if(isPalindrome(*it))
                total++;
        }
        cout << "The string '" << str << "' contains " << total << " palindromes." << endl;
    }
}
