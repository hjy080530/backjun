#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
  int a,b;

  cin>>a>>b;
  if(a%b==0)cout<<a/b;
  else printf("%.10f",(double)a/b);
  return 0;
}