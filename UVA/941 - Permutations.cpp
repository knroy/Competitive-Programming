#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector <char > v;
    char str[100];
    int i,n,k;
    cin >> n;
    while(n--)
    {
        getchar();
        gets(str);
        cin >> k;
        int ln= strlen(str);
        for(i=0; i<ln; i++)
        {
            v.push_back(str[i]);
        }
        sort(v.begin(),v.end());
        i = 1;
        do
        {
            if(i==k+1)
            {
                for(i=0; i<v.size(); i++)
                    cout << v[i];
                cout << endl;
                break;
            }
            i++;
        }
        while(next_permutation(v.begin(),v.end()));
        v.erase(v.begin(),v.end());
    }
    return 0;
}

