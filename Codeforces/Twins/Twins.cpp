#include<iostream>
#include<algorithm>

//using namespace std;

int main(){
	int n, sum=0, sum2=0,j=1;
	std::cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		std::cin >> a[i];
		sum += a[i];
	}
	std::sort(a,a+n);
	for(int i=n-1; i>=0; i--){
		sum2 += a[i];
		if(sum2 > (sum-sum2)){
			break;
		}
		j++;
	}
	std::cout<<j<<std::endl;
	return 0;
}
