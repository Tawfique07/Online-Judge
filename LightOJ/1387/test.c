#include<stdio.h>
int main()
{
    int T, donate, i, n, j;
    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        printf("Case %d:\n",i+1);
        donate=0;
        scanf("%d", &n);
        int in;
        char str[10];
        for(j=0; j<n; j++)
        {
            scanf("%s", str);
            if(str[0]=='d')
            {
                scanf("%d",&in);
                donate=donate+in;
            }
            else
                printf("%d\n",donate);

        }
    }

    return 0;
}
