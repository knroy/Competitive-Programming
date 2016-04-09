#include <iostream>
#include <cmath>

long long gcd(long long a,long long b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

using namespace std;

int main()
{
    long long n,y,upper_bound,lower_bound,up,down,g,temp;
    while(cin >> y)
    {
        n =ceil(( -1 + ceil(sqrt(1+8*y)))/2);
        upper_bound = (n * (n + 1))/2;
        up = (upper_bound-y)+1;
        down = (n-up)+1;
        g = gcd(up,down);
        if(g>1)
        {
            temp = up;
            up = down;
            down = temp;
        }
        cout <<down<<"/"<<up<<endl;
    }
    return 0;
}
