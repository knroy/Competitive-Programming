#include<iostream>
#include<string.h>
#include<algorithm>

#define s 100

using namespace std;

typedef struct tag
{
    int node,time;
} finishing_time;

bool comp(finishing_time a,finishing_time b)
{
    if(a.time>b.time) return true;
    return false;
}

finishing_time f[s];
int t,a[s][s],d[s],node;
bool color[s];

void dfs(int u)
{
    color[u]=true; ///cooloring the source so that we dont call or visit it more than once
    d[u]=++t; ///start time

    for(int i=1; i<=node; i++)
        if(a[u][i] && !color[i])
            dfs(i);///enters here only if it is adjacent and not visited

    f[u].node=u; ///storing id of node
    f[u].time=++t; ///soring end time of the node

    return ;
}

main()
{
    int j,u,v,w,edge;


    ///<initialization> starts

    memset(color,false,sizeof(color));
    memset(a,0,sizeof(a));

    for(int i=1; i<=node; i++)
        f[i].time=0;

    t=0;

    ///</initialization> ends



    ///inout starts
    cin>>node>>edge;

    for(int i=1; i<=edge; i++)
    {
        cin>>u>>v;
        a[u][v]=1;
    }
    ///input ends



    for(int i=1; i<=node; i++) /// Calling DFS
        if(!color[i])  dfs(i);


    sort(&f[1],&f[node+1],comp); ///sorting according to finish time



    ///<output> starts

    cout<<endl<<"Topological Order: ";

    for(int i=1; i<node; i++)
        cout<<f[i].node<<"  ";
    cout<<f[node].node<<endl;

    ///</output> ends

}

/*

7 6

1 3
1 4
3 2
3 5
5 7
5 6

5 8

1 2
1 5
2 3
2 4
3 4
3 5
5 4
4 2

//Credit: Biswa Sir

*/
