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
#define In freopen("In.txt", "r", stdin);
#define Out freopen("out.txt", "w", stdout);

using namespace std;
map <string, string> data,res;
vector <string> v1,v2;
set <string> s;

int main()
{
    int n,i,j,len1,len2,l;
    string word,value;
    char stra[110],strb[110],par[110];
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        gets(stra);
        gets(strb);
        v1.push_back("+");
        v2.push_back("-");
        s.insert("*");
        par[0]='\0';
        len1 = strlen(stra);
        len2 = strlen(strb);
        l = 0;
        for(j=1; j<len1; j++)
        {
            if(stra[j]==':')
            {
                par[l]='\0';
                word = par;
                l = 0;
            }
            else if(stra[j]==',' || stra[j]=='}')
            {
                par[l]='\0';
                value = par;
                if(par[0]!='\0')
                data[word] = value;
                l = 0;
            }
            else
            {
                par[l] = stra[j];
                l++;
            }
        }
        l = 0;
        par[0]='\0';
        for(j=1; j<len2; j++)
        {
            if(strb[j]==':')
            {
                par[l]='\0';
                word = par;
                l = 0;
            }
            else if(strb[j]==',' || strb[j]=='}')
            {
                par[l]='\0';
                value = par;
                if(par[0]!='\0')
                res[word] = value;
                l = 0;
            }
            else
            {
                par[l] = strb[j];
                l++;
            }
        }
        map <string,string> :: iterator it,jt;
        set <string> :: iterator st;
        for(it = data.begin(); it!=data.end(); it++)
        {
            if(res.find(it->first)==res.end())
                v2.push_back(it->first);
            else if(res[it->first]!= data[it->first])
                s.insert(it->first);
        }
        for(jt = res.begin(); jt!=res.end(); jt++)
        {
            if(data.find(jt->first)== data.end())
                v1.push_back(jt->first);
            else if(res[jt->first]!= data[jt->first])
                s.insert(jt->first);
        }
        if(v1.size()+v2.size()+s.size()==3 && v1.size()==1 && v2.size()==1 && s.size()==1)
            cout << "No changes" << endl;
        else
        {
            if(v1.size()>1)
            {
                for(j=0; j<v1.size(); j++)
                {
                    if(j>1)
                        cout << ",";
                    cout << v1[j];
                }
                cout << endl;
            }
            if(v2.size()>1)
            {
                for(j=0; j<v2.size(); j++)
                {
                    if(j>1)
                        cout << ",";
                    cout << v2[j];
                }
                cout << endl;
            }
            if(s.size()>1)
            {
                j = 0;
                for(st = s.begin();st!=s.end();st++)
                {
                    if(j>1)
                        cout << ",";
                    cout << *st;
                    j++;
                }
                cout << endl;
            }
        }
        cout << endl;
        data.clear();
        res.clear();
        s.clear();
        v1.clear();
        v2.clear();
    }
    return 0;
}
/*
Input ::

6
{a:3,b:4,c:10,f:6}
{a:4,c:5,ee:4,d:10}
{x:1,xyz:123456789123456789123456789}
{xyz:123456789123456789123456789,x:1}
{first:1,second:2,third:3}
{third:3,second:2}
{}
{add:1}
{add:1}
{add:1}
{}
{}

*/
