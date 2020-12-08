/*

		accepted


*/



#include <iostream>
#include <cstring>


int main(int argc, char const *argv[])
{
	char dub[]="WUB", check[201];
	int mark=0;

	std::cin>>check;
	for(int i=0; i<strlen(check); i++){
		int j=0;
		for( ; j<3; j++){
			if(check[i+j] != dub[j]){
				mark=1;
				break;
			}
		}
		if(j==3){
			if(mark){
				std::cout << ' ';
				mark=0;
				i+=2;
			}
			else {
				i+=2;
			}
		}
		else {
			std::cout << check[i];
		}
	}

	return 0;
}