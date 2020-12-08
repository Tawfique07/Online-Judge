#include<stdio.h>
#include<math.h>
int main()
{
    int T, a, b, c, i;
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(c>a && c>b)
        {
            if(a*a+b*b==c*c)
                printf("Case %d: yes\n",i+1);
            else
                printf("Case %d: no\n",i+1);
        }
        else if(a>b)
        {
            if(c*c+b*b==a*a)
                printf("Case %d: yes\n",i+1);
            else
                printf("Case %d: no\n",i+1);
        }
        else
        {
            if(a*a+c*c==b*b)
                printf("Case %d: yes\n",i+1);
            else
                printf("Case %d: no\n",i+1);
        }
    }
    return 0;
}
