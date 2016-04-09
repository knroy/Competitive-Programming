#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <cstdlib>

using namespace std;
map <string, string> data;

int main()
{
    string word1,word2;
    char str[30],real[12],diction[12];
    while(gets(str))
    {
        if(strlen(str)==0)
            break;
        sscanf(str,"%s %s",real,diction);
        word1 = real;
        word2 = diction;
        data[word2] = word1;
    }
    while(gets(diction))
    {
        word2 = diction;
        if(data.find(word2) == data.end())
            printf("eh\n");
        else
            printf("%s\n",data[word2].c_str());
    }
    return 0;
}
