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

int main(){

    int n;
    long int total = 0;
    char str[10000];
    cin >> n;
    getchar();
    while(n--){
        long int st = 1;
        gets(str);
        int len = strlen(str);
        for(int i=0;i<len;i++){
            if(str[i]=='O'){
                total += st;
                st++;
            }
            else{
                st = 1;
            }
        }
        cout << total << endl;
        total = 0;
    }
    return 0;
}

