#include <iostream>
#include <algorithm>

int main() {
	int T;
	std::cin >> T;
	while(T--) {
		int n;
		std::cin >> n;
		int s[n];
		for(int i=0; i<n; i++){
			std::cin >> s[i];
		}
		bool mark = true;

		std::sort(s,s+n);
		int sum=0;
		for(int i=n-1; i>=0; i--)
		{
			if(s[i]==2048 || sum==2048){
				printf("YES\n");
				mark = false;
				break;
			}
			else if(s[i]>2048){
				continue;
			}
			else if((sum+s[i])>2048){
				continue;
			}
			else {
				sum+=s[i];
			}
		}
		if(mark && (sum==2048)){
			printf("YES\n");
		}
		else if(mark) {
			printf("NO\n");
		}
	}
}