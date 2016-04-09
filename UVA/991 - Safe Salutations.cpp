#include <iostream>

using namespace std;

long long cat[15];

void cata()
{
    int i;
    cat[0] = 1;
    cat[1] = 1;
    for(i=2; i<16; i++)
    {
        cat[i] = cat[i-1]*(4*i-6)/i;
    }
}

int main()
{
    int n,flag=0;
    cata();
    while(cin >> n)
    {
        if(flag>0)
            cout << endl;
        flag = 1;
        cout << cat[n+1] << endl;
    }
    return 0;
}
