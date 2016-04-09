#include <stdio.h>
#include <string.h>

int main()
{

    int i,j;
    int coinNumber;
    int coinNumberStore[10];
    int coinChange[102];

    memset(coinChange,0,sizeof(coinChange));
    coinChange[0] = 1;

    scanf("%d",&coinNumber);
    for(i=1; i<=coinNumber; i++)
    {
        scanf("%d",&coinNumberStore[i]);
    }

    for(i=1; i<=coinNumber; i++)
    {
        for(j=0; j<=100; j++)
        {
            if(coinChange[j]!=0)
            {

                coinChange[j+coinNumberStore[i]] = coinChange[j] + coinChange[j+coinNumberStore[i]];

            }
        }
    }

    ///*** printing the CoinChange way Array ***///

    for(j=0; j<=100; j++)
    {
        printf("coinChange[%d] = %d\n",j,coinChange[j]);
    }

    ///*** if say highest way to give money ***///

    int MaxWayToGiveMoney = 0;

    for(j=0; j<=100; j++)
    {

        if(coinChange[j]>=MaxWayToGiveMoney)
            MaxWayToGiveMoney = coinChange[j];
    }

    printf("Max Way to Give Money = %d\n",MaxWayToGiveMoney);

    return 0;
}

//Credit : KN Roy
