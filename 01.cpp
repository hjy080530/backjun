#include <iostream>
using namespace std;

int main() {
  long long int i,T,a,j;
  cin>>T;
  for(i=0; i<T; i++){
    cin>>a;
    j=0;
    while(a){
      if(a%2==1)cout<<j<<" ";
      a=a/2;
      j++;
    }
  }
  return 0;
}