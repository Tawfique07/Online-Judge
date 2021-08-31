#include<iostream>

using namespace std;

int main() {
  int a, b, c, max=0;
  int num[5];
  cin >> a >> b >> c;
  num[0]=a+(b*c);
  num[1]=a*(b+c);
  num[2]=a*b*c;
  num[3]=(a+b)*c;
  num[4]=a+b+c;
  for(int i=0; i<5; i++)
  {
    max = max>num[i]? max:num[i];
  }
  cout << max << endl;
  return 0;
}
