#include <iostream>

using namespace std;

int main()
{
    int n,k,i;
    long long C;
    while(1)
    {
        cin >> n >> k;
        if(n==0 && k==0) break;
        if(k>n/2)
            k=n-k;
        C=1;
        for(i=0; i<k; i++)
            C = C*(n-i)/(1+i);
        cout << C << endl;
    }
    return 0;
}
