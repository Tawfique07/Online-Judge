#include <iostream>

int main() {
	int n, m, count=0;
	std::cin >> n >> m;
	
	while(true) {
		int x= n*2;
		if(m==n) 
			break;
		else if(n>m) {
			count += n-m;
			break;
		}
		else if((m & 1)==0) {
			m /= 2;
			count++;
		}
		else if((n & 1) || n==2){
			n *= 2;
			count++;
		}
		else{
			n--;
			count++;
		}
	}
	std::cout << count << std::endl;
	return 0;
		
}