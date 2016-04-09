#include <stdio.h>
#include <string.h>

int color[100][100],r,c,i,j,item[10000];
int head,tail,counter = 0;;
char g[1000][1000];

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
            if(g[x][y]=='*' && color[x][y]==0)
            {
                color[x][y] = 1;
                push(x);
                push(y);
            }
            else if(g[x][y]=='X' && color[x][y]==0)
            {
                color[x][y] = 1;
                push(x);
                push(y);
                bfs();
                counter++;
            }
        }
         printf("%d\n",counter);
    }
    counter = 0;
}

int main()
{
    int n;
    while(scanf("%d %d", &r,&c)==2)
    {
        getchar();
        if(r==0 || c==0)
            break;
        n = 0;
        for(i=0; i<c; i++)
        {
            for(j=0; j<r; j++)
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
                    n++;
                }
            }
        }
        printf("\n%d\n",n);
        memset(g,'\0',sizeof(g));
        memset(item,0,sizeof(item));
        memset(color,0,sizeof(color));
        head = 0;
        tail = 0;
    }
    return 0;
}

