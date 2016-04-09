#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

#define sz 20

int node,dis[sz][sz];

void floyd_warshall()
{
    for(int k=1; k<=node; k++)
        for(int i=1; i<=node; i++)
            for(int j=1; j<=node; j++)
                dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
}

main()
{
    int edge,u,v,w;

    while(cin>>node>>edge)
    {
        memset(dis,1,sizeof(dis));

        for(int i=0; i<=node; i++)  dis[i][i]=0;

        for(int i=1; i<=edge; i++)
        {
            cin>>u>>v>>w;
            dis[u][v]=w;
        }

        floyd_warshall();

        for(int i=1; i<=node; i++)
        {
            for(int j=1; j<=node; j++)
                if(dis[i][j]>9999) cout<<"~~ ";
                else printf("%2d ",dis[i][j]);
            cout<<endl<<endl;
        }
    }
}

/*

5 9
1 2 3
1 3 8
1 5 -4
2 4 1
2 5 7
3 2 4
4 1 2
4 3 -5
5 4 6

4 7
1 1 7
1 2 5
2 1 7
2 4 2
3 2 3
4 1 4
4 3 1

*/
