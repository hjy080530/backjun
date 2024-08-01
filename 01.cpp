#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  string k;
  cin>>n;
  while (n)
  {
    cin>>k;
    if(k.length()>5&&k.length()<10)cout<<"yes"<<"\n";
    else cout<<"no";
    n--;
    //xsax
  }
  

  return 0;
}