#include <iostream>
#include <cstring>
#include <cstdio>

int main() {

	char  name[101];
	gets(name);
	int i=0, max=0,j=-1,check;
	for( ; i<strlen(name); i++) {
		if(name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U' || name[i]=='Y') {

			check=i-j; j=i;
			if(max < check){
				max = check;
			}
		}
	}

	check = i-j;
	if(max < check){
		max = check;
	}

	
	std::cout << max ;

	return 0;
}