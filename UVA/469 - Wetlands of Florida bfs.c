#include<stdio.h>
#include<string.h>

int g[100][100],s,u,v,n,inf=10000,front=0,rear=0;
int q[100];
char color[100];
int q_len = 100;

void enque(int q[],int x)
{

    q[rear]=x;
    if(rear==q_len)
        rear=0;
    else
        rear=rear+1;
}

int deque(int q[])
{
    int x=q[front];
    if(front==q_len)
        front=0;
    else
        front=front+1;
    return x;
}

void bfs(int g[][100],int s)
{
    int i;
    for(u=0; u<n; u++)
        color[u]='w';
    color[s]='g';
    front=rear;
    enque(q,s);
    while(front!=rear)
    {
        u=deque(q);
        for(v=0; v<n; v++)
        {
            if(g[u][v]==1)
            {
                if(color[v]=='w')
                {
                    color[v]='g';
                    enque(q,v);
                }
            }
        }
        color[u]='b';
    }
}

int main()
{
    int i,j,k,l,w;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            g[i][j]=0;
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&k);
        for(j=0; j<k; j++)
        {
            scanf("%d",&l);
            g[i][l-1]=1;
        }
    }
    bfs(g,s);
    return 0;
}
