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
char strn[100];

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


int main()
{
    int a;
    long long b;
    char str[50],nums[10];
    while(gets(str))
    {
        sscanf(str,"%s %d %lld",nums,&a,&b);
        anytodeci(nums,a);
        decitoany(b);
        int len = strlen(strn);
        if(len > 7)
            cout << "  ERROR" << endl;
        else
        {
            int i,j;
            j = 7 - len;
            for(i=0; i<j; i++)
                printf(" ");
            for(i=len-1; i>=0; i--)
                printf("%c",strn[i]);
            printf("\n");
        }
        MEM(strn,'\0');
    }
    return 0;

}
