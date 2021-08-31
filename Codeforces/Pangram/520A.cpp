#include <iostream>
#include <algorithm>

int main() {
	int n, check[26]={0};
	std::cin >> n;

	char str[n+1];

	scanf("%s",str);

	for(int i=0; i<n; i++) {
		str[i]= str[i] | 32;
		int x=str[i];
		check[x-97]++;
	}

	std::sort(check,check+26);
	if(check[0])
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}