#include <stdio.h>
#include <string.h>
#include <math.h>

int color[500][500],r,c,i,j,item[250000];
int head,tail,count_one,n;
char g[500][500];

void push(int num)
{
    item[tail] = num;
    tail++;
}

int empty()
{
    return tail==head;
}

int q_front()
{
    return item[head];
}

void pop()
{
    head++;
}

void bfs()
{
    count_one = 0;
    count_one++;
    color[i][j] = 1;
    push(i);
    push(j);
    while(!empty())
    {
        int k;
        int nr = q_front();
        pop();
        int nc = q_front();
        pop();
        int cx[8] = {-1,-1,0,1,1,1,0,-1};
        int cy[8] = {0,1,1,1,0,-1,-1,-1};
        for(k = 0; k<8; k++)
        {
            int x = nr + cx[k];
            int y = nc + cy[k];
            if(g[x][y]=='*' && color[x][y]==0)
            {
                color[x][y] = 1;
                push(x);
                push(y);
                count_one++;
            }
        }
    }
    if(count_one==1)
        n++;
}

int main()
{
    while(scanf("%d %d",&r,&c)==2)
    {
        getchar();
        if(r==0 || c==0)
            break;
        n = 0;
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                scanf("%c",&g[i][j]);
            }
            getchar();
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(g[i][j]=='*' && color[i][j]==0)
                {
                    bfs();
                }
            }
        }
        printf("%d\n",n);
        memset(g,'\0',sizeof(g));
        memset(item,0,sizeof(item));
        memset(color,0,sizeof(color));
        head = 0;
        tail = 0;
        n = 0;
    }
    return 0;
}
