#include<stdio.h>
#include<math.h>
int main()
{
    int T, i;
    scanf("%d", &T);
    double n[T], circle, squre;
    double pi=2*acos(0.0);
    for(i=0; i<T; i++)
        scanf("%lf", &n[i]);
    for(i=0; i<T; i++)
    {
        circle=pi *pow(n[i],2.00);
        squre= pow(n[i]*2.00,2.00);
        printf("Case %d: %.2f\n",i+1, (squre-circle);
    }
    return 0;
}
