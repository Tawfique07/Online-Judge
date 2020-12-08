#include<iostream>
#define ll long long
using namespace std;
int main() {
  ll n;
  int count=0;
  cin >> n;
  while(n){
    int rem = n%10;
    if(rem==4 || rem==7)
      {
        count++;
      }
      n/=10;
  }
  if(count==4 || count==7)
    cout << "YES" <<endl;
  else
    cout << "NO" <<endl;
  return 0;
}
