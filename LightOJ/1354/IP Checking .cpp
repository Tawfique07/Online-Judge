#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int BIN[8]={128,64,32,16,8,4,2,1};

bool ans(int dec[],int bin[])
{
    char name[9];
    int four=4;

    while(four--)
    {
        int eight=8;
        int length = sprintf(name,"%d",bin[four]);
        while(length--)
        {
            eight--;
            bool bit=name[length]-'0';
            bool bits=dec[four]&BIN[eight];
            if(bits ^ bit)
                return false;
        }
    }
    return true;
}

int main()
{
    int dec[4],bin[4];

    int T;
    cin >> T;

    for(int i=1; i<=T ; i++)
    {
        scanf("%d.%d.%d.%d",&dec[0],&dec[1],&dec[2],&dec[3]);
        scanf("%d.%d.%d.%d",&bin[0],&bin[1],&bin[2],&bin[3]);
        if(ans(dec,bin))
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
    return 0;
}
