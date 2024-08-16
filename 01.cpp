#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n,i,a;

  cin>>n;

  if(n<100){
    a=n%10;
    n=n/10;
    a+=n;
  }
  else if(n<1000){
    if(n%10==0){
      a=n%100;
      n=n/100;
      a+=n;
    }
    else{
      a=n%10;
      n=n/10;
      a+=n;
    }
  }
  else{
    a=n%100;
    n=n/100;
    a+=n;
  }
  cout<<a;
  return 0;
}