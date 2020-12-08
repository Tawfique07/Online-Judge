#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int j[n];
    for(i=0; i<n; i++)
        scanf("%d", &j[i]);
    for(i=0; i<n; i++)
    {
        if(j[i]<=10)
            printf("%d %d\n", 0, j[i]);
        else
            printf("%d %d\n", j[i]-10, 10);
    }
    return 0;
}
