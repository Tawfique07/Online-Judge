#include <iostream>
#include <cstring>
#include <cstdio>

int main() {
	int n;
	
	std::cin >> n;
	int m=0;
	char name[n][35];
	int array[n]={0};
	while(n--) {
		 int i; bool mark = false;

		 char str[35];

		 scanf("%s",str);
		
		if(m==0){
			std::cout << "OK" <<std::endl;
			strcpy(name[0],str);
			m++;
		}
		else{
			for(i=0; i<m; i++){
				int check = strcmp(name[i],str);
				if(check==0){
					mark = true;
					array[i]++;
					break;
				}
			}
			if(mark){
				printf("%s%d\n", str, array[i]);
			}
			else {
				printf("OK\n");
				strcpy(name[m],str);
				m++;
			}
		}
	}
	return 0;
		
}