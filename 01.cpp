#include <iostream>
using namespace std;

int main() {
  int n,m,i,ac[1000],h=0,j;
  string a[1000],b;
  cin>>n;
  for(i=0; i<n; i++)cin>>a[i];
  cin>>m;
  for(i=0; i<m; i++){
    cin>>b;
    for(j=0; j<n; j++){
      if(b==a[j]){
        h++;
        ac[j]=1;
      }
    }
  }
  cout<<h<<"\n";
  for(i=0; i<n; i++){
    if(ac[i]==0){
      cout<<a[i]<<"\n";
    }
  }
  return 0;
}