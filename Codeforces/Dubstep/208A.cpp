/*
     time limit exceeded !!!!!


*/


#include <iostream>
#include <cstring>


int main(int argc, char const *argv[])
{
	char dub[]="WUB", check[201];
	int mark=0;

	std::cin>>check;
	for(int i=0; check[i]; i++){
		int j=0;
		for( ; j<3; j++){
			if(check[i+j] != dub[j]){
				mark=1;
				break;
			}
		}
		if(j==3){
			if(mark){
				check[i]=' ';
				for( j=i+1; j<=(strlen(check)-2); j++){
					check[j]=check[j+2];
				}
				mark=0;
			}
			else {
				for( j=i; j<=(strlen(check)-3); j++){
					check[j]=check[j+3];
				}
				i--;
			}
		}
	}
	puts(check);

	return 0;
}