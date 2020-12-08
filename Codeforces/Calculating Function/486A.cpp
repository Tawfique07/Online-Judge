#include<iostream>

int main(int argc, char const *argv[])
{
	long long n;
	std::cin >> n;
	if(n & 1)
		std::cout << (n/2)-n <<std::endl;
	else
		std::cout << n/2 <<std::endl;
	return 0;
}