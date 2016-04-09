#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    long long k,n,t,temp,root,incre,i;
    cin >> t;
    for(i=0; i<t; i++)
    {
        if(i>0)
            cout << endl;
        cin >> k;
        if(k<0)
            k *= -1;
        n = (-1+sqrt(1+8*k))/2;
        temp = (n*(n+1))/2;
        root = sqrt(n);
        if(temp==k)
            cout << root << endl;
        else
        {
            root++;
            while(1)
            {
                incre = (root*(root+1)/2 - k);
                if(incre<0)
                    continue;
                if(incre%2==0)
                    break;
                root++;
            }
            cout << root << endl;
        }
    }
    return 0;
}
