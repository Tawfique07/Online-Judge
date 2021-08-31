#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;
	int min = a<b? a:b;
	if(min & 1)
		std::cout << "Akshat";
	else 
		std::cout << "Malvika";
	return 0;
}