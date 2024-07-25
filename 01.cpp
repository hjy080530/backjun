#include <iostream>

using namespace std;

int main() {
  int a,i;
  cin>>a;
  int b,sum=0;
  for(i=0; i<a; i++){
    cin>>b;
    sum+=b;
  }
  cout<<sum;
  return 0;
}
//걍 좀 해줘