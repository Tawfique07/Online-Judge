#include <iostream>
#include <cstring>

int main() {
	char str[1005];
	gets(str);
	int x, a[26]={0};
	for(int i=1; i<strlen(str); i+=3) {
		x = str[i];
		x-=97;
		a[x]++;
	}
	x = 0;
	for(int i=0; i<26; i++) {
		if(a[i])
			x++;
	}
	std::cout << x;

	return 0;
}