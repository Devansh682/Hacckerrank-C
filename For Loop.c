#include <stdio.h>
int main()
{
    int i,j,k;
    int a,b;
    char *ch[]={"null","one","two","three","four","five",
    "six","seven","eight","nine"};
    scanf("%d%d",&a,&b);

    for(i=a;i<=b;i++)
    {
        if(i>9 && i%2)
            printf("odd number\n");
        else if(i>9 && i%2==0)
            printf("even number\n");
        else
            printf("%s\n",ch[i]);

    }
    return 0;
}