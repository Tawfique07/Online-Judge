#include <iostream>
#include <cstring>

int main() {

	char str1[120],str2[120];
	gets(str1);
	gets(str2);
	for(int i=0; str1[i]; i++) {
		if(str1[i]==str2[i]){
			str1[i] = '0';
		}
		else {
			str1[i] = '1';
		}
	}

	puts(str1);

	return 0;
}