#include <bits/stdc++.h>

using namespace std;

string rt, first,follow;
vector<string> root,prod,firstRoot;
map<string,string> firstMap,followMap;

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

bool isContainsRef(string str,string str2)
{
    if(strstr(str.c_str(),str2.c_str()))
        return true;
    return false;
}

int isContain(string str)
{
    int ln = str.length();
    if(ln == 1)
    {
        for(int i=0; i<prod.size(); i++)
        {
            string tmp = prod[i];
            if(strstr(tmp.c_str(),str.c_str()) && root[i].compare(str)!=0 && !isContainsRef(tmp,str+"'"))
                return i;
        }
        return -1;
    }
    else
    {
        for(int i=0; i<prod.size(); i++)
        {
            string tmp = prod[i];
            if(strstr(tmp.c_str(),str.c_str()))
            {
                return i;
            }
        }
        return -1;
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

    for(int i=0; i<root.size(); i++)
    {
        cout << root[i] << ">>" << prod[i] << endl;
    }

    //Here @ is considered as null
    cout << endl << "Here @ is considered as null" << endl << endl;

    // just print the first

    for(int i=0; i<firstRoot.size(); i++)
    {
        cout << "First(" + firstRoot[i] + "): ";
        printFirst(firstRoot[i]);
        firstMap[firstRoot[i]] = first;
    }

    // just print the follow

    // first of all get follow for starting


    cout << endl;

    rt = firstRoot[0];
    follow = ",$";
    int prodLoc = isContain(rt);
    tmp = prod[prodLoc];
    int loc;
    int lns = tmp.length();
    for(int i=0; i<lns-1; i++)
    {
        if(tmp[i]!=rt[0])
            continue;
        else
            loc = i+1;
    }
    string tmp_tmp;
    if(loc < lns)
    {
        tmp_tmp = tmp.substr(loc,lns-loc+1);
        follow = tmp_tmp + follow;
        followMap[rt] = follow;
        cout << "Follow(" + rt + "): {" + follow + "}" << endl;
    }
    else if(lns-1 == loc)
    {
        if(followMap.find(rt)!=followMap.end())
            follow = followMap[rt] + "," + follow;
        else
        {
            //do nothing
        }
    }

    for(int i=1; i<firstRoot.size(); i++)
    {
        prodLoc = isContain(firstRoot[i]);
        tmp = prod[prodLoc];
        lns = tmp.length();
        for(int i=0; i<lns-1; i++)
        {
            if(tmp[i]!=firstRoot[i][0])
                continue;
            else
                loc = i+1;
        }
        if(loc < lns)
        {
            tmp_tmp = tmp.substr(loc,lns-loc+1);
            follow = tmp_tmp + follow;
            followMap[rt] = follow;
            cout << "Follow(" + rt + "): {" + follow + "}" << endl;
        }
        else if(lns-1 == loc)
        {
            if(followMap.find(rt)!=followMap.end())
                follow = followMap[rt] + "," + follow;
            else
            {
                //do nothing
            }
        }
    }

    root.clear();
    prod.clear();

    return 0;
}

/*

E=E+T|T
T=T*F|F
F=(E)|id

*/

