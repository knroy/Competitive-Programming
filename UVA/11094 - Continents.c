#include <stdio.h>
#include <stdio.h>

int color[100][100],r,c,i,j,item[10000];
int head,tail,counta;
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

void bfs(char ch,int a,int b)
{
    counta++;
    color[a][b] = 1;
    push(a);
    push(b);
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
            if(g[x][y]==ch && color[x][y]==0)
            {
                counta++;
                color[x][y] = 1;
                push(x);
                push(y);
            }
        }
    }
}

int main()
{
    freopen("In.txt", "r", stdin);
    int n,a,b;
    char ch;
    while(scanf("%d %d", &r,&c)==2)
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
        ch = g[0][0];
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(g[i][j]==ch)
                    g[i][j] = '0';
                else
                    g[i][j] = '1';
            }
        }
        scanf("%d %d",&a,&b);
        ch = g[a][b];
        if(color[a][b]==0)
        {
            bfs(ch,a,b);
        }
            printf("%d\n",counta);
        memset(g,'\0',sizeof(g));
        memset(item,0,sizeof(item));
        memset(color,0,sizeof(color));
        head = 0;
        tail = 0;
        counta = 0;
    }
    return 0;
}
