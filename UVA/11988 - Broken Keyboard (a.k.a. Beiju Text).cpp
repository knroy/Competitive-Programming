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

// Using List this Problem was Solved :)

int main ()
{
    char x[100*1000+1];
    while (scanf("%s", x) != EOF)
    {
        list<char> carlist;
        list<char>::iterator it=carlist.begin();
        int n=strlen(x);
        for(int i=0; i<n; i++)
        {
            if (x[i] == '[')
                it = carlist.begin();
            else if (x[i] == ']')
                it = carlist.end();
            else
                carlist.insert(it, x[i]);
        }
        for (it = carlist.begin(); it != carlist.end(); it++)
        {
            printf("%c", *it);
        }
        printf("\n");
    }

    return 0;
}
