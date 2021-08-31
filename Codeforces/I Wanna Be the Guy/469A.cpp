#include <iostream>
#include <algorithm>

int main() {
	int n, p, q, x;
	std::cin >> n >> p;

	n++;

	int y[n]={0};

	for(int i=0; i<p; i++) {
		std::cin >> x;
		y[x]++;
	}
	std::cin >> q;
	for(int i=0; i<q; i++) {
		std::cin >> x;
		y[x]++;
	}

	std::sort(y,y+n);

	if(y[1]) {
		std::cout << "I become the guy." ;
	}
	else {
		std::cout << "Oh, my keyboard!" ;
	}

	return 0;
}