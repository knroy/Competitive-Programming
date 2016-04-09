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
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);

using namespace std;
vector <string > v1;
vector <int> v2;

int main()
{
    int n,j=1;
    cin >> n;
    while(n--)
    {
        int t=10,num,cnt=0;
        char str[1000];
        string mystring;
        while(t--)
        {
            scanf("%s %d",str,&num);

            if(num>cnt)
                cnt = num;
            mystring = str;
            v1.push_back(mystring);
            v2.push_back(num);
        }
        cout << "Case #"<< j << ":" << endl;
        for(int i=0;i<v2.size();i++)
        {
            if(v2[i]==cnt)
                cout << v1[i] << endl;
        }
        j++;
        v1.clear();
        v2.clear();
    }
    return 0;
}
