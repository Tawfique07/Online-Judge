#include<stdio.h>
int main()
{
    long w;
    int i, T, N, j;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&w);
        if(w & 1)
            printf("Case %d: Impossible\n",i);
        else
        {
            for(j=2; j<w; j=j+2)
            {
                N=w/j;
                if(N & 1)
                {
                    printf("Case %d: %d %d\n",i ,N ,j);
                    break;
                }
            }
        }
    }
    return 0;

}


