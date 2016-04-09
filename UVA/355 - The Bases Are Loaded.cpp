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

long long result;
char strn[500];

int power(int a,int b)
{
    int res=1,i=1;
    while(i<=b)
    {
        res *= a;
        i++;
    }
    return res;
}

void anytodeci(char nums[],int a)
{
    result = 0;
    int len = strlen(nums);
    int i,j=0;
    for(i=len-1; i>=0; i--)
    {
        int n;
        if(nums[i]>='0' && nums[i]<='9')
            n = nums[i] - 48;
        else
            n = nums[i] - 55;
        result += n*power(a,len-1-i);
    }
}

void decitoany(long long x)
{
    char ch;
    int j=0;
    long long temp,f = result;
    if(f==0)
    {
        strn[j] = '0';
        j++;
    }
    else
    {
        while(f!=0)
        {
            temp = f%x;
            if(temp>=10)
                ch = temp + 55;
            else
                ch = temp + '0';
            strn[j] = ch;
            f = f/x;
            j++;
        }
    }
    strn[j] = '\0';
}

int YesBase(char nums[],int a)
{
    int n;
    int len = strlen(nums);
    for(int i=0; i<len; i++)
    {
        if(nums[i]>='0' && nums[i]<='9')
            n = nums[i] - 48;
        else
            n = nums[i] - 55;
        if(n>=a)
            return 0;
    }
    return 1;
}

void reversestring()
{
    int len = strlen(strn);
    for(int i=0; i<len/2; i++)
    {
        char temp = strn[i];
        strn[i] = strn[len-1-i];
        strn[len-1-i] = temp;
    }
    strn[len] = '\0';
}

int main()
{
    In
    int a;
    long long b;
    char nums[100];
    while(scanf("%d %lld %s",&a,&b,nums)==3)
    {
        if(YesBase(nums,a))
        {
            anytodeci(nums,a);
            decitoany(b);
            reversestring();
            printf("%s base %d = %s base %lld\n",nums,a,strn,b);
        }
        else
            printf("%s is an illegal base %d number\n",nums,a);
        MEM(strn,'\0');
    }
    return 0;

}

