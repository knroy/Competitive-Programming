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



vector <long> server[]

struct data{
    long server,cost;

    bool operator < (const data& p) const{
        return cost > p.cost;
    }
};

int dijkstra(int source,int destination){


}

int main()
{
    long int testCase,i,j;
    long int n,m,s,t;

    long int startingNode,endingNode,costOfSandT;

    scanf("%ld",&testCase);

    for(i=1;i<=testCase;i++)
    {
        scanf("%ld %ld %ld %ld",&n,&m,&s,&t);

        for(j=1;j<=m;i++)
        {
            scanf("%ld %ld %ld",&startingNode,&endingNode,costOfSandT);

        }
    }
}
