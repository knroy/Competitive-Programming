#include <stdio.h>
#include <string.h>

int color[50][50],r,i,j,item[2500];
int head,tail;
char g[50][50];

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
            if(g[x][y]=='1' && color[x][y]==0)
            {
                color[x][y] = 1;
                push(x);
                push(y);
            }
        }
    }

}

int main()
{
    int n,count=1;
    while(scanf("%d",&r)==1)
    {
        getchar();
        n = 0;
        for(i=0; i<r; i++)
        {
            for(j=0; j<r; j++)
            {
                scanf("%c",&g[i][j]);
            }
            getchar();
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<r; j++)
            {
                if(g[i][j]=='1' && color[i][j]==0)
                {
                    bfs();
                    n++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",count++,n);
        memset(g,'\0',sizeof(g));
        memset(item,0,sizeof(item));
        memset(color,0,sizeof(color));
        head = 0;
        tail = 0;
    }
    return 0;
}
