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

void editDistance(string str1,string str2,int ln1,int ln2,int cn1,int cn2)
{
    if(ln1 == ln2 && cn1 > cn2)
        return;
    char ch = str1[cn1];
    char ch2 = str2[cn2];
    if((ch==ch2)){
        //editDistance(str1,str2,ln1,ln2,cn1+1,cn2+1);
    }
    else if((ch!=ch2) && ln1 < ln2)
    {
        cout << "I" << str2[cn2];
        printf("%02d\n",cn2+1);
        string tmp = "" + str2[cn2];
        //str1.insert(cn1,tmp);
        //editDistance(str1,str2,ln1+1,ln2)
    }
    cout << str1 << " "  << str2 << endl;
}

int main()
{
    string str1,str2;
    while(cin >> str1)
    {
        if(str1.compare("#")==0)
            break;
        cin >> str2;
        editDistance(str1,str2,str1.size(),str2.size(),0,0);
        cout << str1 << endl;
    }
    return 0;
}
