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
#define pb(x) push_back(x)
#define MEM(a,b) memset((a),(b),sizeof(a))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);
#define sz 1000000000
#define INF (1<<28)
#define i64 long long unsigned
#define ll long long
#define li long int

using namespace std;

bool recout(int arr[],int s,int sum)
{
    if(s==5 && sum!=23)
        return false;
    if(s==5 && sum == 23)
        return true;
    else
        return (recout(arr,s+1,sum+arr[s]) || recout(arr,s+1,sum-arr[s]) || recout(arr,s+1,sum*arr[s]));
}

int main()
{
    int nums[5];
    while(cin >> nums[0] >> nums[1] >>nums[2] >>nums[3] >> nums[4])
    {
        if(nums[0]==0 && nums[1]==0 && nums[2]==0 && nums[3]==0 && nums[4]==0)
            break;
        sort(&nums[0],&nums[5]);
        bool isPossible;
        do
        {
            isPossible = recout(nums,1,nums[0]);
            if(isPossible == true)
                break;
        }
        while(next_permutation(&nums[0],&nums[5]));

        if(isPossible)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }
    return 0;
}
