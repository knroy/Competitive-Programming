#include<stdio.h>
#include<string.h>

int main()
{
    char ch;
    while(ch!=EOF)
    {
        ch=getchar();
        if(ch=='E' || ch=='e')
            printf("q");
        else if(ch=='R' || ch=='r')
            printf("w");
        else if(ch=='T' || ch=='t')
            printf("e");
        else if(ch=='Y' || ch=='y')
            printf("r");
        else if(ch=='U' || ch=='u')
            printf("t");
        else if(ch=='I' || ch=='i')
            printf("y");
        else if(ch=='O' || ch=='o')
            printf("u");
        else if(ch=='P' || ch=='p')
            printf("i");
        else if(ch=='[')
            printf("o");
        else if(ch=='A' || ch=='a')
            printf("[");
        else if(ch=='S' || ch=='s')
            printf("]");
        else if(ch=='D'  || ch=='d')
            printf("a");
        else if(ch=='F' || ch=='f')
            printf("s");
        else if(ch=='G' || ch=='g')
            printf("d");
        else if(ch=='H' || ch=='h')
            printf("f");
        else if(ch=='J' || ch=='j')
            printf("g");
        else if(ch=='K' || ch=='k')
            printf("h");
        else if(ch=='L' || ch=='l')
            printf("j");
        else if(ch==';')
            printf("k");
        else if(ch==39)
            printf("l");
        else if(ch=='Z' || ch=='z')
            printf("'");
        else if(ch=='X' || ch=='x')
            printf("\\");
        else if(ch=='C'  || ch=='c')
            printf("z");
        else if(ch=='V' || ch=='v')
            printf("x");
        else if(ch=='B' || ch=='b')
            printf("c");
        else if(ch=='N' || ch=='n')
            printf("v");
        else if(ch=='M' || ch=='m')
            printf("b");
        else if(ch==']')
            printf("p");
        else if(ch==',')
            printf("n");
        else if(ch=='.')
            printf("m");
        else if(ch=='/')
            printf(",");
        else if(ch==' ')
            printf(" ");
        if(ch=='\n')
            printf("\n");
    }
    return 0;
}
