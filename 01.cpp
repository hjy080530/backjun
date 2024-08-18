#include <iostream>
#include <algorithm>
  using namespace std;
int main()
{
  int i,n,p[1000];
  cin>>n;
  for(i=0; i<n; i++)cin>>p[i];
  sort(p,p+n);
  for(i=n-1; i>=0; i--)cout<<p[i]<<" ";
	return 0;//ㅇㄴㅊ
}