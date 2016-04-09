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
vector <char> v;

int main()
{
    char str[200];
    int n,i,j;
    scanf("%d", &n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(str);
        for(j=0;j<strlen(str);j++)
            v.push_back(str[j]);
        //sort(v.begin(),v.end());
        do
        {
            for(j=0;j<v.size();j++)
                cout << v[j];
            cout << endl;
        }while(next_permutation(v.begin(),v.end()));
        v.clear();
    }
    return 0;
}
