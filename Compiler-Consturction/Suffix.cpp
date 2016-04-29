#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(cin >> str){
        int len = str.length();

        for(int i=0;i<len;i++){
            cout << str.substr(i,len+1) << endl;
        }
        cout << "null" << endl;
    }
    return 0;
}


