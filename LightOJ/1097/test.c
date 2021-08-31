#include<stdio.h>
int rec(int N)
{
    int div, mod;
    if(N<3)
        return N;
    else
    {
        div=N/3;
        mod=N%3;
        N=N-mod;
        return N+rec(div+mod);
    }
}

int rec7(int N)
{
    int div, mod;
    if(N<7)
        return N;
    else
    {
        div=N/7;
        mod=N%7;
        N=N-mod;
        return N+rec7(div+mod);
    }
}

int main()
{
    int N, M, K, L;
    scanf("%d", &N);

    M=rec(N);
    K=rec7(M);
    L=rec(K-(M/3));

    printf("%d\n%d\n%d",M, K,L);

    return 0;
}
