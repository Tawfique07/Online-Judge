#include<stdio.h>
int main()
{
    int T, N, mor, div, num, i;

    scanf("%d", &T);

    for(i=0; i<T; i++)
    {
        scanf("%d", &N);
        div=N/3;
        mor=div;
        while(3<=div)
        {
            div=div/3;
            mor=mor+div;
        }
        N=N+mor;
        div=N/7;
        mor=div;
        while(7<=div)
        {
            div=div/7;
            mor=mor+div;
        }
        N=N+mor;
        num=(N-1)*2;
        printf("%d\n", num+1);
    }


    return 0;
}
