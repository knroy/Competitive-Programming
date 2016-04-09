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
#define m 20000

using namespace std;
map <string, vector<string> > mp;
map <string, vector<int> > mp2;
int mins = -20000;

void returnMin(string strt,string destination,int minWeight,string parent)
{
    vector <string> str;
    vector <int> cost;
    int ln;
    if(strt.compare(destination)==0)
    {
        if(minWeight > mins)
            mins = minWeight;
        return;
    }
    if(mp.find(strt)==mp.end())
    {
        minWeight = 20000;
        return;
    }
    str = mp[strt];
    cost = mp2[strt];
    ln = str.size();
    for(int i=0; i<ln; i++)
    {
        string nextStr = mp[strt][i];
        if(parent == nextStr)
        {
            continue;
        }
        int cost = mp2[strt][i];
        if(cost < minWeight)
            minWeight = cost;
        returnMin(nextStr,destination,minWeight,parent);
        minWeight = 20000;
    }
}

int main()
{
    In
    int n,r,weight;
    string cityA,cityB;
    string citySource,cityDestination;
    int cnt = 1;
    while(cin >> n >> r)
    {
        if(n==0 && r == 0)
            break;
        if(r!=0)
        {
            for(int i=0; i<r; i++)
            {
                cin >> cityA >> cityB >> weight;
                mp[cityA].push_back(cityB);
                mp2[cityA].push_back(weight);
            }
            cin >> citySource >> cityDestination;
            if(mp.find(citySource)!=mp.end())
            {
                returnMin(citySource,cityDestination,200000,citySource);
            }
            else
            {
                returnMin(cityDestination,citySource,200000,cityDestination);
            }
            mp.clear();
            mp2.clear();
        }
        else
        {
            cin >> citySource >> cityDestination;
        }
        cout << "Scenario #" << cnt << endl;
        if(mins!=-20000)
            cout << mins << " tons\n" << endl;
        else
        {
            cout << "0 tons\n" << endl;
        }
        cnt++;
        mins = -20000;
    }
    return 0;
}
