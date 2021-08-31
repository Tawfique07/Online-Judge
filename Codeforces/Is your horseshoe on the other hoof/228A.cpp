#include <iostream>
#include <algorithm>

int main() {
	int a[4];
	int count = 0;
	std::cin >> a[0] >> a[1] >> a[2] >> a[3];
	std::sort(a,a+4);
	for(int i=0; i<3; i++){
		if(a[i]==a[i+1])
			count++;
	}
	std::cout << count;
	return 0;
}