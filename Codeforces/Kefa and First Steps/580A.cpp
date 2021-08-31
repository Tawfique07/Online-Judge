#include<iostream>

using namespace std;

int main()
{
  int n, count=1, max=0;
  cin >> n ;
  int a[n];
  for(int i=0; i<n; i++)
      cin>>a[i];
  for(int i=1; i<=n; i++)
  {
    max = max>count? max:count ;
    if(a[i]>=a[i-1])
      count++;
    else
      count=1;

  }
  cout << max << endl;
  return 0;
}
