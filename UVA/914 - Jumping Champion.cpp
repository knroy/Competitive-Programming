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
#define sz 1000001

using namespace std;

bool status[sz];

void siv()
{
    int i,j;
    int N=sz;
    int sq=sqrt(N);
    for(i=4; i<=N; i+=2) status[i]=1;
    for(i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            for(j=i*i; j<=N; j+=i) status[j]=1;
        }
    }
    status[1] = 1;
    status[0] = 1;
}

int nextPrime(int x,int y)
{
    for(int i=x; i<=y; i++)
    {
        if(status[i]==0)
            return i;
    }
    return -1;
}

int main()
{
    siv();
    int a,b;
    int x,y;
    int n;
    int arr[120];
    cin >> n;
    for(int l=0; l<n; l++)
    {
        cin >> x >> y;
        MEM(arr,0);
        int ln = 0;
        int mx = -1;
        while(x<=y)
        {
            if(status[x]==0)
            {
                int z = nextPrime(x+1,y);
                if(z!=-1)
                {
                    arr[z-x]++;
                    if((z-x)>ln)
                        ln = z - x;
                    x = z;
                }
                else
                {
                    x = y+1;
                }
            }
            else
                x++;
        }
        int index = -1,cnt = 0;
        for(int i=1; i<=ln; i++)
        {
            if(arr[i]>mx)
            {
                index = i;
                mx = arr[i];
            }
        }
        for(int i=1; i<=ln; i++)
        {
            if(arr[i] == mx)
            {
                cnt++;
                if(cnt > 1)
                    break;
            }
        }
        if(cnt == 1)
        {
            cout << "The jumping champion is " << index << endl;
        }
        else
        {
            cout << "No jumping champion" << endl;
        }
    }
    return 0;
}

