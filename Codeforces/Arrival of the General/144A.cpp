#include <iostream>


int main() {

	int n, max=0, min=101, maxindex, minindex, x;
	std::cin >> n;

	for(int i=1; i<=n; i++) {
		std::cin >> x;
		if(x > max) {
			max = x;
			maxindex = i;
		}
		if(x <= min) {
			min = x;
			minindex = i;    
		}
	}
	max = maxindex-1;
	min = n-minindex;

	n=max +min;

	if(minindex<maxindex) {
		n--;
	}

	std::cout << n ;

	return 0;
}