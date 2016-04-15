#include <bits/stdc++.h>

using namespace std;

string rt, first;
vector<string> root,prod,firstRoot;
map<string,string> firstMap;

struct points
{
    string origin;
    string orSbstrLeft;
    string orSbstrRight;
};

int orPos(string str,int n)
{
    for(int i=0; i<n; i++)
        if(str[i]=='|')
            return i;
}

points left_rec(string str,int n)
{
    points data;
    int pos = orPos(str,n);
    string sbstr = str.substr(pos+1,n-pos);
    string orSbstr = str.substr(3,pos-3);
    string origin = str.substr(0,1);
    data.origin = origin;
    data.orSbstrLeft = orSbstr;
    data.orSbstrRight = sbstr;
    return data;
}

int getRoot(string str)
{
    string tmp = "";
    int ln = str.length();
    int i;
    for(i=0; str[i]!='='; i++)
    {
        tmp += str[i];
    }
    rt = tmp;
    return i+1;
}

int isTerminal(char ch)
{
    if(ch>='A' && ch <='Z')
        return false;
    return true;
}

bool isContainsID(string sta)
{
    if(sta[0] == 'i' && sta[1]=='d')
        return true;
    return false;
}


string getNextProduction(string st)
{
    for(int i=0; i<root.size(); i++)
    {
        if(root[i].compare(st) == 0)
            return prod[i];
    }
    return "";
}

void printEveryTerminalByRoot(string str)
{
    first = "";
    int cnt = 0;
    cout << "{";
    for(int i=0; i<root.size(); i++)
    {
        if(root[i].compare(str) == 0)
        {
            if(cnt > 0)
            {
                cout << ",";
                first += ",";
            }
            if(isContainsID(prod[i]))
            {
                cout << "id";
                first += "id";
            }
            else
            {
                cout << prod[i].substr(0,1);
                first += prod[i].substr(0,1);
            }
            cnt++;
        }
    }
    cout << "}" << endl;
}

void printFirst(string start)
{
    if(start.size() == 1)
    {
        string pd = getNextProduction(start);
        string tmp;
        if(isTerminal(pd[0]))
        {
            printEveryTerminalByRoot(start);
            return;
        }
        else
        {
            tmp = pd.substr(0,1);
            printFirst(tmp);
        }
    }
    if(start.size()==2)
    {
        string pd = getNextProduction(start);
        string tmp;
        if(isTerminal(pd[0]))
        {
            printEveryTerminalByRoot(start);
            return;
        }
        return;
    }
}


int main()
{
    string str,tmp;

    while(cin >> str)
    {
        if(str.compare("#")==0)
            break;
        int x = getRoot(str);
        int ln = str.size();
        tmp = "";
        char ch = str[0];
        if(ch == str[x])
        {
            points data = left_rec(str,str.length());
            root.push_back(data.origin);
            firstRoot.push_back(data.origin);
            prod.push_back(data.orSbstrRight + data.origin + "'");
            firstRoot.push_back(data.origin + "'");
            root.push_back(data.origin + "'");
            prod.push_back(data.orSbstrLeft+data.origin + "'");
            root.push_back(data.origin + "'");
            prod.push_back("@");
        }
        else
        {
            firstRoot.push_back(rt);
            for(int i=x; i<=ln; i++)
            {
                if(str[i]=='|' || i==ln)
                {
                    root.push_back(rt);
                    prod.push_back(tmp);
                    tmp = "";
                }
                else
                {
                    tmp += str[i];
                }
            }
        }
    }

    //Here @ is considered as null
    cout << endl << "Here @ is considered as null" << endl << endl;

    for(int i=0; i<firstRoot.size(); i++)
    {
        cout << "First(" + firstRoot[i] + "): ";
        printFirst(firstRoot[i]);
        firstMap[firstRoot[i]] = first;
    }

    // just print the first

    root.clear();
    prod.clear();

    return 0;
}

/*

E=E+T|T
T=T*F|F
F=(E)|id

*/
