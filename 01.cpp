#include<iostream>

using namespace std;

int main(){
  int n,m,i,j,a[101][101];
  cin>>n>>m;
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      cin>>a[i][j];
    }
  }
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      cout<<a[i][j]<<" ";
    }
    cout<<"\n";
  }

  return 0;
}