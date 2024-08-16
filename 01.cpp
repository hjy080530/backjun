#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  long long int n,i,p[10]={0};
  cin>>n;
/ㅊㅊ
  while(n){
    p[n%10]++;
    n=n/10;
  }
  if(p[6]>p[9])p[6]=p[6]-p[9];
  else p[9]=p[9]-p[6];
  n=max_element(p,p+10);
  cout<<n;
  return 0;
}