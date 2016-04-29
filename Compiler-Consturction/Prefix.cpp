#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(cin >> str){
        int len = str.length();
        for(int i=1;i<=len;i++){
            cout << str.substr(0,i) << endl;
        }
        cout << "null" << endl;
    }
    return 0;
}

