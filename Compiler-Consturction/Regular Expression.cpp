#include<bits/stdc++.h>

using namespace std;

bool isOK(string str){
    for(int i=0;i<str.length() - 1;i++)
        if(str[i]!='a')
            return false;
    return true;
}

int main()
{
    //regular expression
    // a*b
    string str;
    while(cin >> str){
        int len = str.length();
        if(str[len-1]!='b'){
            cout << "Not a regular expression!!" << endl;
        }else{
            if(isOK(str)){
                cout << "Regular Expression" << endl;
            }else{
                cout << "Not a regular expression!!" << endl;
            }
        }
    }
    return 0;
}

