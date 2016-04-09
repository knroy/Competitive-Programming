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
#define max(a,b,c) (MAX(MAX(a,b),c))
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);
#define INT_MIN -556545

using namespace std;

int maxCrossingSum(int a[],int l,int m,int h)
{
    int left_sum = INT_MIN;
    int sum = 0,i;
    for(i=m; i>=l; i--)
    {
        sum += a[i];
        if(sum > left_sum)
            left_sum = sum;
    }
    sum = 0;
    int right_sum = INT_MIN;
    for(i=m+1; i<=h; i++)
    {
        sum += a[i];
        if(sum > right_sum)
            right_sum = sum;
    }
    return left_sum+right_sum;
}

int findMaxSubarray(int a[],int low,int high)
{
    if(high == low)
        return a[low];
    int mid = (low + high)/2;
    return max(findMaxSubarray(a,low,mid),findMaxSubarray(a,mid+1,high),maxCrossingSum(a,low,mid,high));
}

int main()
{
    In
    int mat[110][110];
    int temp[110];
    int i,j,l,n;
    int maxSum;
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&mat[i][j]);
            }
        }
        maxSum = INT_MIN;
        for (int left = 0; left < n; left++)
        {
            MEM(temp,0);
            for (int right = left; right < n; right++)
            {
                for (int i = 0; i < n; i++)
                    temp[i] += mat[i][right];
                int x = findMaxSubarray(temp,0,n-1);
                if(x>maxSum)
                {
                    maxSum = x;
                }
            }
        }
        printf("%d\n",maxSum);
    }
    return 0;
}
