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
///************ Habijabi ends here**********************///


using namespace std;

vector <int> VS;

int main()
{
    int n,x,item,beg,ends,mid;
    bool flag=0;
    cin >> n;
    while(n--)
    {
        cin >> x;
        VS.push_back(x);
    }

    cin >> item;

    beg = 0;
    ends = VS.size()-1;
    while(beg<=ends)
    {
        mid = (beg+ends)/2;
        if(VS[mid]==item)
        {
            flag = 1;
            cout << "Item found on Location: " << mid+1 << endl;
            break;
        }
        else if(VS[mid]<item)
            beg = mid+1;
        else
            ends = mid - 1;
    }

    if(flag==0)
        cout << "Item not Found" << endl;

    VS.empty();

    return 0;
}
