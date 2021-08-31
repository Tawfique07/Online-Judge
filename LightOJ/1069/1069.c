#include<stdio.h>
int main()
{
    int T, i, me, lift, pos;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d %d", &me, &lift);
        if(me>lift)
        {
            lift= (me-lift)+me;
            pos=19+lift*4;
            printf("Case %d: %d\n",i, pos);
        }
        else
        {
            pos=19+lift*4;
            printf("Case %d: %d\n",i, pos);
        }
    }
    return 0;
}
