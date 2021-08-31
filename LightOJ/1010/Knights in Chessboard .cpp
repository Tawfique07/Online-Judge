#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i=1; i<=T; i++)
    {
        int m , n;
        cin >> m >> n;

        int mult=m*n;
        if(m==1 || n==1)
            printf("Case %d: %d\n",i ,mult);
        else if(m==2 || n==2)
        {
            int x;
            if(m==2)
                 x=n;
            else
                 x=m;
            if(x%4)
            {
                if(x%4==2)
                    printf("Case %d: %d\n",i ,x+2);
                else
                    printf("Case %d: %d\n",i ,x+1);

            }
            else
                printf("Case %d: %d\n",i ,x);
        }
        else if(mult & 1)
            printf("Case %d: %d\n",i ,(mult/2)+1);
        else
            printf("Case %d: %d\n",i ,mult/2);
    }
    return 0;
}
