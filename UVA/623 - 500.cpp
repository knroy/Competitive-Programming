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
#define num 3000

using namespace std;

char x=0,ch[50],c[num],bol[50];
int f=0;

typedef struct
{
    char fact[num];
}  charfact;

charfact fstr,bf_str[1001];
char arra[num],arrb[num];

void copys()
{
    memset(bol,'0',sizeof(bol));
    memset(ch,'\0',sizeof(ch));
    strncpy(ch,bol,f);
}

int maxx(int len1,int len2)
{
    if(len1>len2)
        return len1;
    else
        return len2;
}

void string_reverse()
{
    int len = strlen(c);
    int i;
    int mid = len/2;
    char temp;
    for(i=0; i<mid; i++)
    {
        temp = c[i];
        c[i] = c[len-i-1];
        c[len-i-1] = temp;
    }
    c[len] = '\0';
}

void adding()
{
    if(f==0)
    {
        char a[2];
        a[0]='0';
        a[1]='\0';
        strcpy(fstr.fact,a);
    }
    strcpy(arra,fstr.fact);
    int len1,len2,len;
    len1 = strlen(arra);
    len2 = strlen(arrb);
    len = maxx(len1,len2);
    int extra = 0,sum = 0,j = 0,k = len1-1,l = len2-1;
    while(1)
    {
        len--;
        if(k<0)
            arra[k] = '0';
        if(l<0)
            arrb[l] = '0';
        sum = (arra[k]-'0') + (arrb[l]-'0') + extra;
        k--;
        l--;
        if(sum>=10)
        {
            sum = sum - 10;
            extra = 1;
        }
        else
            extra = 0;
        c[j] = sum + '0';
        j++;
        if(extra == 0 && len<=0)
            break;
    }
    c[j]='\0';
    string_reverse();
    strcpy(fstr.fact,c);
}

void multiply_char_with_int(char a[],int n)
{
    int l=0,multi=0,r,mod;
    int len = strlen(a);
    r = len;
    int extra = 0;
    while(1)
    {
        if(len<=0 && extra==0)
            break;
        len--;
        int in = a[len] - '0';
        if(l>=r)
            in = 0;
        multi = in * n + extra;
        mod = multi%10;
        extra = multi/10;
        arrb[l]=mod+'0';
        l++;
    }
    arrb[l]='\0';
    for(int i=0; i<l/2; i++)
    {
        char ch = arrb[i];
        arrb[i]= arrb[l-i-1];
        arrb[l-i-1] = ch;
    }
    copys();
    strcat(arrb,ch);
    adding();
}

void bigfact()
{
    char a[2],ito_a[5];
    a[0]='1';
    a[1]='\0';
    strcpy(bf_str[0].fact,a);
    int i,j,temp,t;
    for(i=1; i<=1000; i++)
    {
        temp = i,t=0;
        while(temp!=0)
        {
            ito_a[t] = temp%10+'0';
            temp = temp/10;
            t++;
        }
        ito_a[t]='\0';
        int len = strlen(ito_a);
        f=0;
        for(j=0; j<len; j++)
        {
            multiply_char_with_int(bf_str[i-1].fact,ito_a[j]-'0');
            f++;
        }
        strcpy(bf_str[i].fact,fstr.fact);
        memset(fstr.fact,'\0',sizeof(fstr.fact));
    }
}

int main()
{
    bigfact();
    int b_fact;
    while(scanf("%d",&b_fact)==1)
    {
        printf("%d!\n%s\n",b_fact,bf_str[b_fact].fact);
    }
    return 0;
}
