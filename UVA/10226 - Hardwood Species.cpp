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
map <string,double> data;
set <string> s;

int main()
{
    long int t,i,j;
    string mystring;
    char str[35];
    scanf("%ld\n\n",&t);
    for(j=0; j<t; j++)
    {
        if(j>0)
            cout << endl;
        i = 0;
        while(gets(str))
        {
            if(str[0]=='\0')
                break;
            mystring = str;
            data[mystring]++;
            s.insert(mystring);
            i++;
        }
        set <string > :: iterator it;
        for(it=s.begin(); it!=s.end(); it++)
        {
            double sum = (data[*it] * 100.0 )/(double)i;
            cout << *it << " ";
            printf("%.4lf\n",sum);
        }
        data.clear();
        s.clear();
    }
}
