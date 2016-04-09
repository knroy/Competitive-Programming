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
using namespace std;

vector <long int> arr[1000001];

int main()
{
    long int n,m,i,st,k,v;
    while(cin >> n >> m)
    {
        for(i=1; i<=n; i++)
        {
            cin >> st;
            arr[st].push_back(i);
        }
        for(i=0; i<m; i++)
        {
            cin >> k >> v;
            if(arr[v].size()<k)
                cout << "0" << endl;
            else
                cout << arr[v][k-1] << endl;
        }
    }
    return 0;
}
