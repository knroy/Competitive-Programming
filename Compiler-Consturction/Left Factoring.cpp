#include<bits/stdc++.h>
#define MIN(a,b) ((a)>(b)?(b):(a))
using namespace std;
string root;

int splitRoot(string str)
{
    string temp = "";
    int i;
    for(i=0; str[i]!='='; i++)
        temp += str[i];
    root = temp;
    return i+1;
}

string maxMatch(string aa,string ab)
{
    string tmp="";
    int lna = aa.length();
    int lnb = ab.length();
    int ln = MIN(lna,lnb);
    for(int i=0;i<ln;i++)
    {
        if(aa[i]!=ab[i])
            break;
        else
            tmp += aa[i];
    }
    return tmp;
}



int main()
{
    vector<string> splits;

    string str;
    while(cin >> str)
    {
        int x = splitRoot(str);
        int ln = str.length();
        string tmp = "";
        int mnLen = 10000;
        for(int i=x; i<=ln; i++)
        {
            if(str[i]=='|' || i==ln)
            {
                splits.push_back(tmp);
                tmp = "";
            }
            else
            {
                tmp += str[i];
            }
        }
        int sz = splits.size();

        if(sz>1){
            tmp = splits[0];
            string pref = "";
            int tmp_sz = tmp.size();
            int arr[sz+5] = {0};
            for(int i=0;i<tmp_sz;i++)
            {
                char ch = tmp[i];
                for(int j=0;j<sz;j++){
                    string next = splits[j];
                    int nextSz = next.size();
                    if(nextSz > i){
                        if(next[i] == ch){
                            next[i] = " ";
                        }
                    }
                }
            }
        }
    }
    return 0;
}

