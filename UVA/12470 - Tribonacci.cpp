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

vector <long long unsigned> v;

void tribonacci()
{
    long long unsigned i,n=1000000009,sum;
    //i = pow(10,16);
    //cout << i << endl;
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    for(i=4;i<=n;i++)
    {
        sum =(v[i-1]%n+ v[i-2]%n + v[i-3]%n)%n;
        v.push_back(sum);
        //cout << v[i] << endl;
    }
}

int main()
{
    tribonacci();
}
