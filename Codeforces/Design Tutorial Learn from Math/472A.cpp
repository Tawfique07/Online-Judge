#include<math.h>
#include<iostream>
#include<cstdio>
#define ll long long
 
 
bool a[1000001]={false};
 
void prime()
{
	a[0]=false;
	a[1]=false;
	for(int i=2; i<=1000; i++)
	{
		if(a[i]==false)
		{
			for(int j=i*i; j<=1000000; j+=i)
			{
				if(a[j]==false)
					a[j]=true;
			}
		}
	}
}
 
bool prime(int N)
{   
   return a[N];
}
 
int main()
{
    int n, check, i;
    prime();
    std::cin >> n;
    
    for(i=4; i<n; i++) {
        if(prime(i)){
            check = n-i;
            if(prime(check))
                break;
        }
    }

    std::cout << i <<" " << check << std::endl;
 
    return 0;
}