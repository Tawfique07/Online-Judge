#include<stdio.h>
int main()
{
    long w;
    int i, T, N;
    float ;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&w);
        for(j=2.0; j<w; j=j+2.0)
        {
            N=(w/j)*10;
            if(N%10==0)
            {
                N=N/10;
                if(N & 1)
                {
                    printf("Case %d: %d %.0f\n", i, N, j);
                    N=0;
                    break;
                }
            }
        }
        if(N!=0)
            printf("Case %d: Impossible\n",i);
    }
    return 0;

}
