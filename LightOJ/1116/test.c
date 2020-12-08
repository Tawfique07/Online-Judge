#include<stdio.h>
int main()
{
    long w;
    int i, T, N, j;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&w);
        for(j=2; j<w; j=j+2)
        {
           for(N=3; N<w; N=N+2)
           {
               if(N*j==w)
               {
                   printf("Case %d: %d %d\n",i ,N ,j);
                   w=0;
                   break;
               }
           }
           if(w==0)
            break;
        }
        if(w!=0)
            printf("Case %d: Impossible\n",i);
    }
    return 0;

}

