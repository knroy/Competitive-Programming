#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n,y,upper_bound,lower_bound,up,down;
    while(cin >> y)
    {
        n =ceil(( -1 + ceil(sqrt(1+8*y)))/2);
        upper_bound = (n * (n + 1))/2;
        up = (upper_bound-y)+1;
        down = (n-up)+1;
        cout <<up<<"/"<<down<<endl;
    }
    return 0;
}
