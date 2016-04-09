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
#define MEX 100

using namespace std;
int cnt;

void merge(int lef[],int rig[],int arr[],int m,int n)
{
    int i=0,j=0,k=0;
    int nL = m;
    int nR = n;
    while(i<nL && j<nR)
    {
        if(lef[i]<=rig[j])
        {
            arr[k] = lef[i];
            i++;
        }
        else
        {
            arr[k] = rig[j];
            j++;
            cnt += m - i;
        }
        k++;
    }
    while(i<nL)
    {
        arr[k] = lef[i];
        i++;
        k++;
    }
    while(j<nL)
    {
        arr[k] = rig[j];
        j++;
        k++;
    }
}

void mergesort(int arr[],int n)
{
    int i;
    if(n<2)
        return;
    int mid = (n+1)/2;
    int left[mid],right[n-mid];
    for(i=0; i<mid; i++)
        left[i] = arr[i];
    for(i = mid; i<n; i++)
        right[i-mid] = arr[i];
    mergesort(left,mid);
    mergesort(right,n-mid);
    merge(left,right,arr,mid,n-mid);
}

int main()
{
    int arr[MEX];
    int i,j,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    mergesort(arr,n);
    for(i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl << cnt << endl;
    return 0;
}
