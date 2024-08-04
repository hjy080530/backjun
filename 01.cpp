#include <iostream>
using namespace std;

int main() {
  long long int i,n,hap=0;
  cin>>n;
  for(i=1; i<=n; i++){
    if(n%i==0)hap+=i;
  }
  cout<<hap;
  return 0;
}