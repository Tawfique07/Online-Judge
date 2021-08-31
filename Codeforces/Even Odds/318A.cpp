#include<iostream>
#define ll long long

int main(int argc, char const *argv[])
{
	ll n,k,odd;
	std::cin >> n >> k;
	if(n & 1){
		odd=(n/2)+1;
	}
	else
	{
		odd=n/2;
	}

	if(k<=odd){
		k=1+(k-1)*2;
	}
	else
	{
		k-=odd;
		k=2+(k-1)*2;
	}	
	
	std::cout << k <<std::endl;
	return 0;
}