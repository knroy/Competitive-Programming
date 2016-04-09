#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,temp;
    char str[10];
    while(scanf("%d",&n) && n)
    {
        getchar();
        int up=1, down=6, north=2, south=5, west=3, east=4;
        while(n--)
        {
            gets(str);
            if(strcasecmp(str,"north")==0)
            {
                temp = up;
                up = south;
                south = down;
                down = north;
                north = temp;
            }
            else if(strcasecmp(str,"east")==0)
            {
                temp = up;
                up = west;
                west = down;
                down = east;
                east = temp;
            }
            else if(strcasecmp(str,"south")==0)
            {
                temp = up;
                up = north;
                north = down;
                down = south;
                south = temp;
            }
            else if(strcasecmp(str,"west")==0)
            {
                temp = up;
                up = east;
                east = down;
                down = west;
                west = temp;
            }
        }
        printf("%d\n",up);
    }
    return 0;
}
