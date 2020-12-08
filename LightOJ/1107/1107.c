#include<stdio.h>
int main()
{
    int T, i, j, A, B, n, X[2], Y[2];
    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        printf("Case %d:\n",i+1);
        for(j=0; j<2; j++)
            scanf("%d %d", &X[j], &Y[j]);

        scanf("%d", &n);
        int x[n],y[n];
        for(j=0; j<n; j++)
        {
            scanf("%d %d", &x[j], &y[j]);
            A= X[0]<=x[j] && Y[0]<=y[j];
            B= X[1]>=x[j] && Y[1]>=y[j];
            if(A && B)
                printf("Yes\n");
            else
                printf("No\n");

        }
    }
    return 0;
}
