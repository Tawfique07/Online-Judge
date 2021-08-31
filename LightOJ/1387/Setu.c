#include<stdio.h>
int main()
{
    int T, donate, i, n, j;
    scanf("%d", &T);
    int out[T][100];
    for(i=0; i<T; i++)
    {
        donate=0;
        scanf("%d", &n);
        int in, k=0;
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
            {
                out[i][k]=donate; k++;
            }

        }
        out[i][k]=0;


    }

    for(i=0; i<n; i++)
    {
        printf("Case %d:\n",i+1);
        for(j=0; out[i][j]; j++)
        {
            printf("%d\n",out[i][j]);
        }
    }

    return 0;
}
