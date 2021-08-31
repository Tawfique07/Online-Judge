#include <iostream>
#include <algorithm>
#include <cstring>

int main(){
	char str1[101], str2[101];
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	gets(str2);
	std::sort(str1,str1+strlen(str1));
	std::sort(str2,str2+strlen(str2));
	if(strcmp(str1,str2))
		printf("NO\n");
	else
		printf("YES\n");
	
	return 0;
}