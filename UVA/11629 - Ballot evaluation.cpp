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

using namespace std;
map <string, int > data;
char ch[10];

void string_reverse()
{
    int len = strlen(ch);
    int i;
    int mid = len/2;
    char temp;
    for(i=0; i<mid; i++)
    {
        temp = ch[i];
        ch[i] = ch[len-i-1];
        ch[len-i-1] = temp;
    }
    ch[len] = '\0';
}


int main()
{
    string party;
    char str[30],par[22];
    char str1[1000];
    int pnum,equ,i,j,l,rnum;
    int ps,ps2,lnum;
    scanf("%d %d",&pnum,&equ);
    getchar();
    for(i=0; i<pnum; i++)
    {
        gets(str);
        sscanf(str,"%s %d.%d",par,&ps,&ps2);
        party = par;
        data[party] = ps*10+ps2;
    }
    for(i=1; i<=equ; i++)
    {
        gets(str1);
        int len = strlen(str1);
        rnum = 0;
        l=0;
        for(j = len-1; str1[j]!=' '; j--)
        {
            ch[l] = str1[j];
            l++;
        }
        ch[l] = '\0';
        int rando = j;
        char sign[3];
        l = 0;
        for(j = rando-1; str1[j]!=' '; j--)
        {
            sign[l] = str1[j];
            l++;
        }
        sign[l] = '\0';
        if(strlen(sign)==2)
        {
            int temp = sign[0];
            sign[0] = sign[1];
            sign[1] = temp;
            rando = rando - 2;
        }
        else
            rando -= 1;
        string_reverse();
        sscanf(ch,"%d",&rnum);
        rnum *= 10;
        lnum = 0;
        int flag = 0;
        l = 0;
        for(j=0; j<rando; j++)
        {
            if(str1[j]!=' ')
            {
                par[l] = str1[j];
                l++;
            }
            else
            {
                par[l]='\0';
                party = par;
                lnum += data[party];
                j += 2;
                l = 0;
            }
        }
        len = strlen(sign);
        if(len==1)
        {
            if(strcasecmp(sign, ">")==0)
            {
                if(lnum > rnum)
                    flag = 1;
            }
            else if(strcasecmp("<",sign)==0)
            {
                if(lnum < rnum)
                    flag = 1;
            }
            else if(strcasecmp(sign, "=")==0)
            {
                if(lnum==rnum)
                    flag = 1;
            }
        }
        else
        {
            if(strcasecmp(sign, ">=")==0)
            {
                if(lnum > rnum || lnum == rnum)
                    flag = 1;
            }
            else if(strcasecmp(sign, "<=")==0)
            {
                if(lnum < rnum || lnum == rnum)
                    flag = 1;
            }
        }
        if(flag==1)
            printf("Guess #%d was correct.\n",i);
        else
            printf("Guess #%d was incorrect.\n",i);
        memset(sign,'\0',sizeof(sign));
    }
    return 0;
}
