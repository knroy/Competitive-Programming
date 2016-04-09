#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    vector <long long int > v;
    long long int arr[100000],n,flag=0,i,temp;
    for(i=0; i<100000; i++)
    {
        arr[i] = 0;
    }
    while(cin >> n)
    {
        temp = 0;
        if(flag==0)
        {
            v.push_back(n);
            arr[0]++;
            flag++;
        }
        else if(flag>0)
        {
            for(i=0; i<v.size(); i++)
            {
                if(v[i]==n)
                {
                    arr[i]++;
                    temp = 1;
                    break;
                }
            }
            if(temp!=1)
            {
                v.push_back(n);
                arr[flag]++;
                flag++;
            }
        }
    }
    for(i=0; i<v.size(); i++)
    {
        cout << v[i] << " " << arr[i] << endl;
    }
    return 0;
}
