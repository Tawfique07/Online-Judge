#include <iostream>

int main() {
	int n, t;
	std:: cin >> n >> t;
	int array[n];
	bool mark = false;
	for(int i=1; i<n; i++)
		std::cin >> array[i];
	for(int i=1; i<=t; i+=array[i]){
		if(i==t)
			mark = true;
	}
	if(mark)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}