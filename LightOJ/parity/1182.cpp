#include<iostream>
#include<cstdio>
#include<math.h>

int BIN[32]={0};
void set()
{
  for(int i=0; i<=31; i++)
  {
    BIN[i]=pow(2,i);
  }
}
int main(void)
{
    int T;
    set();
    std::cin >> T;
    for(int i=1; i<=T; i++)
    {
      short count=0;
      unsigned int n;
      std::cin >> n;
      for(int j=0; j<32; j++)
      {
        bool check = BIN[j] & n;
        if(check)
          count++;
      }
      if(count & 1)
        printf("Case %d: odd\n",i );
      else
        printf("Case %d: even\n",i );
    }
    return 0;
}
