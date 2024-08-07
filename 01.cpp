#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
  int n,i,a,h=0;
  cin>>n;
  while(n){
    cin>>a;
    int k=0;
    if(a==1||a==4){
      n--;
      continue;
    }
    else{
      for(i=2; i<a; i++){
        if(i%a==0){
          k++; 
          break;
        }
      }
      if(k==0){
        h++;
      }
    }
    n--;///csdcsd
  }
  cout<<h;

  return 0;
}