#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int i,n,a,b,sum;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        cin >> a >> b;
        sum = 0;
        while(a<=b)
        {
            if(a%2==1)
                sum += a;
            a++;
        }
        cout << sum << endl;
    }
    return 0;
}
