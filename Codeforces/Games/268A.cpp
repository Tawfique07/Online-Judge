#include <iostream>

int main() {
	int n, count=0;
	std::cin >> n;
	int a[n][2];
	for(int i=0; i<n; i++) {
		std::cin >> a[i][0] >> a[i][1];
	}

	for(int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if(a[i][0]==a[j][1]) {
				count++;
			}
		}
	}
	std::cout << count ;

	return 0;
}